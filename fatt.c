// #include<stdio.h>
// int fun(){
//     static int num=40;
//     return num--;
// }
// int main(){
//     for (int i=1;fun();i++)
//     printf("%d",fun());
//     return 0;
// }

#include<stdio.h>
int main(){
    int x;
    int *ptr=&x;
    *ptr=0;
    printf("%d",&x);
    printf("%d %d\n",x,*ptr);
    *ptr+=5;
    printf("%d %d\n",x,*ptr);
    (*ptr)++;
    printf("%d %d\n",x,*ptr);
    ptr++;
    printf("%p %d\n",ptr,*ptr);
    return 0;
}