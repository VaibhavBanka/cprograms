#include <stdio.h>
int rev1(int n,int arr[]);
void main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n],reve,rev[n];
    printf("Enter the elements\n");
    for (int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if (n%2!=0){
        reve=rev1(n,arr);
    }
    else{
        reve=rev2(n,arr);
    }
}
int rev1(int n,int arr[]){
    int rev1[n];
    int a=n/2;
    for(int i=0;i<n;i++){
        if (i<a){
            rev1[i]=arr[a-i-1];
        }
        else if (i==a)
        rev1[i]=arr[a];
        else if (i>a)
        rev1[i]=arr[a+n-i];
    }
    for (int i=0;i<n;i++){
        printf("%d ",rev1[i]);
    }
}
int rev2(int n,int arr[]){
    int rev1[n];
    int a=n/2;
    for(int i=0;i<n;i++){
        if (i<a){
            rev1[i]=arr[a-i-1];
        }
        else if (i>=a)
        rev1[i]=arr[a+n-i-1];
    }
    for (int i=0;i<n;i++){
        printf("%d ",rev1[i]);
    }
}