#include<stdio.h>
void main()
{
    char operator;
    double a,b;
    printf("Enter one of them (+,-,/,*):");
    scanf("%c",&operator);
    printf("Enter first number : ");
    scanf("%lf",&a);
    printf("Enter second number : ");
    scanf("%lf",&b);
    switch (operator)
    {
    case '+':
    printf("The sum is %lf",a+b);
    break;
    case '-':
    printf("The difference is %lf",a-b);
    break;
    case '*':
    printf("The product is %lf",a*b);
    break;
    case '/':
    printf("The diference is %lf",a/b);
    break;
    default:
    printf("No match");
    break;
    }
}