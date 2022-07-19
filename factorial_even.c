#include<stdio.h>
int main()
{
char fav; int num=0,choice=1,fact=1,i;
printf("\n Enter a Number:");
scanf("%d",&num);
do
{
printf("\n Press 1 to find factorial of a number \n Press 2 to check whether the number is Prime or Not \n Press 3 to find check number is even or odd \n Press 4 to Exit"); printf("\n Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: for(i=num;i>1;i--)
             fact*=i;
            printf("\n Factorial of %d",num);
            printf(" is %d",fact);
            break;
case 2:for(i=2;i<num;i++)
            {
             if(num%i==0)
            {
            printf(" \n %d is not a prime number",num);
            break;
            }
            }
            if(num==i)
            printf("%d is a prime number",num);
            break;
case 3: if(num%2==0)
            printf("%d is an even number",num);
            else
            printf("\n %d is an odd number",num);
            break;
case 4: return 0;
default: printf("\n wrong choice");
}
printf("\n Do you want to continue?(y/n)\n");
scanf("\n %c",&fav);
}while(fav=='y');
return 0;
}