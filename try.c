#include<stdio.h>
#include<string.h>
int main(){
    printf("%s","Ram");
    int br,bs,lr=0,ls=0;
    char word1[50];
    scanf("%d",&br);
    for (int i=0;i<br;i++){
    scanf("%s",&word1);
    int len=strlen(word1);
    lr+=len;
    }
    printf("Ram:%d",lr);
    printf("%s","Shyam");
    char word2[50];
    scanf("%d",&bs);
    for (int i=0;i<bs;i++){
    scanf("%s",&word2);
    int len=strlen(word2);
    ls+=len;
    }
    printf("Shayam:%d",ls);
    return 0;
}