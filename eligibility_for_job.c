#include <stdio.h>
int main()
{
    int age;
    printf("Enter the : ",age);
    scanf("%d",&age);
    if (age<18)
    {
        printf("You are minor and not fit for job");
    }
    else if (18<=age<=60)
    {
        printf("Fit for job");
    }
    else 
    {
        printf("You are a major and not fit for job");
    }
    return 0;
}