#include<stdio.h>
int main()
{
    int r1,r2,r3,r4,runs; 
    printf("Enter the runs scored in last 4 matches:\n");
    scanf("%d",&r1);
    scanf("%d",&r2);
    scanf("%d",&r3);
    scanf("%d",&r4);
    runs=r1+r2+r3+r4;
    printf("The average is %d",runs/4);
    return 0;
}