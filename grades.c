#include <stdio.h>
int main()
{
    int percent;
    printf("Enter the percentage you got: ");
    scanf("%d",&percent);
    if (percent>=80)
    {
        printf("Your grade is A+");
    }
    else if (percent>=80)
    {
        printf("Your grade is A+");
    }
    else if (percent>=75)
    {
        printf("Your grade is A");
    }
    else if (percent>=45)
    {
        printf("Your grade is C");
    }
    else if (percent>=35)
    {
        printf("Your grade is D.");
    }
    else if (percent<35)
    {
        printf("You are fail");
    }
    return 0;
}