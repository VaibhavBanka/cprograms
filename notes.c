#include<stdio.h>
struct student{
    int n1;
    int n2;
};
print (int b,struct student s[]){
    b=n;
    for(int i=0;i<b;i++)
    printf("%d\n",s[i].n1+s[i].n2);
}
int main(){
    int n;
    scanf("%d",&n);
    struct student s1[n];
    for (int i=0;i<n;i++){
        scanf("%d %d",&s1.n1,&s1.n2);
    }
    print(n,s1);
    return 0;
}