#include <stdio.h>
int main()
{
    int marks[10],i,n,sum=0;
    float average;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Enter the number %d: ",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
    }
    average=sum/n;
    printf("The average is %.1f",average);
    return 0;
}