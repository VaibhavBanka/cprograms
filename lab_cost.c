#include <stdio.h>
int main()
{
    int noc,coec,nof,coef,nol,coel,cost;
    printf("Enter the number of computers to be established :");
    scanf("%d",&noc);
    printf("Enter the cost of each computer : ");
    scanf("%d",&coec);
    printf("Enter the number of furnitures to be established :");
    scanf("%d",&nof);
    printf("Enter the cost of each furniture :");
    scanf("%d",&coef);
    printf("Enter the number of labours : ");
    scanf("%d",&nol);
    printf("Enter the cost of each labour :");
    scanf("%d",&coel);
    cost=(noc*coec)+(nof*coef)+(nol+coel);
    printf("The total cost is %d",cost);
    return 0;
}