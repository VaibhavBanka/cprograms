#include <stdio.h>
int insert(int pos,int n,int element,int arr[100],int arr1[100]);
void main(){
    int n,element,pos;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int arr[n+1];
    insert(pos,n,element,arr,arr1);
}
int insert(int pos,int n,int element,int arr[],int arr1[]){
    printf("Enter the position:");
    scanf("%d",&pos);
    printf("enter the element:");
    scanf("%d",&element);
    for (int i=0;i<n+1;i++){
        if(i<pos)
        arr[i]=arr1[i];
        else if(i>pos)
        arr[i]=arr1[i-1];
        else if (i==pos)
        arr[i]=element;
    }
    printf("The new array is:\n");
    for (int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}