#include<stdio.h>
int main()
{
char ask; int num=0,choice=1,fact=1,i;
printf("\n Enter a Number:");
scanf("%d",&num);
do
{
printf("\n Press 1 to find factorial of a number \n Press 2 to find check number is even or odd \n Press 3 to Exit");
printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: for(i=1;i<=num;i++)
        fact*=i;
        printf("\n Factorial of %d is %d",num,fact);
        break;
case 2: if(num%2==0)
        printf("%d is an even number",num);
        else
        printf("\n %d is an odd number",num);
        break;
case 3: return 0;
default: printf("\n Wrong Choice");
}
printf("\n Do you want to continue?(y/n)\n");
scanf("\n %c",&ask);
}while(ask=='y');
printf("THANKS FOR USING THIS CALCULATOR");
return 0;
}