#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    int rev[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        rev[n-i-1]=arr[i];
    }
    for (int j=0;j<n;j++){
        printf("%d ",rev[j]);
    }
}