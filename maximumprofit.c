#include<stdio.h>
int main(){
    int k,n,i,j;
    scanf("%d",&k);
    scanf("%d",&n);
    int num[n],cost[n],per[n];
    for(i=0;i<n;i++)
        scanf("%d",&num[i]);
    for(i=0;i<n;i++)
        scanf("%d",&cost[i]);
    for(i=0;i<n;i++)
        scanf("%d",&per[i]);
    int pn[n];
    for(i=0;i<n;i++)
        pn[i]=(cost[i])*(per[i])/100;
    int pnreal[n];
    for(i=0;i<n;i++)
        pnreal[i]=pn[i];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(pn[i]<pn[j]){
                int a = pn[i];
                pn[i]=pn[j];
                pn[j]=a;
            }
        }  
    }
    int index[n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(pn[i]==pnreal[j]){
                index[i]=j;
            }
        }
    }
    for(i=0;i<k;i++){
        printf("%d ",num[i]);
    }
    return 0;
}