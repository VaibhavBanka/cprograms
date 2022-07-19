#include <stdio.h>
int insert(int pos,int n,int element,int *v,int *s){
    int arr,arr1;
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("enter the element:");
    scanf("%d",&element);
    for (int i=0;i<n+1;i++){
        if(i<pos)
        *(v+i)=*(s+i);
        else if(i>pos)
        *(v+i)=*(s+i-1);
        else if (i==pos)
        *(v+i)=element;
    }
    printf("The new array is:\n");
    for (int i=0;i<n+1;i++)
        printf("%d ",*(v+i));
}
void main(){
    int n,element,pos,arr[100];
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr1[n],*p=arr1;
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",(p+i));
    insert(pos,n,element,arr,arr1);
}