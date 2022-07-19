#include <stdio.h>
int plus(int a,int b);
int main()
{
    int n1,n2,sum,multiply,rev;
    char op;
    printf("Enter the operator(+,*,$):");
    scanf("%c",&op);
    if (op=='+'){
        printf("Enter number 1:");
        scanf("%d",&n1);
        printf("Enter number 2:");
        scanf("%d",&n2);
        sum=plus(n1,n2);
        printf("sum=%d",sum);
        return 0;
    }
    else if (op=='*'){
        printf("Enter number 1:");
        scanf("%d",&n1);
        printf("Enter number 2:");
        scanf("%d",&n2);
        multiply=star(n1,n2);
        printf("product=%d",multiply);
        return 0;
    }
    else if(op=='$'){
        printf("Enter the number:");
        scanf("%d",&n1);
        rev=dollar(n1);
        printf("Reverse=%d",rev);
        return 0;
    }
}
int plus(int a,int b){
    int result;
    result=a+b;
    return result;
}
int star(int n1,int n2){
    int result;
    result=n1*n2;
    return result;
}
int dollar(int n1){
    int result=0;
    while (n1!=0){
        int rem=n1%10;
        result=result*10+rem;
        n1=n1/10;
    }
    return result;
}
