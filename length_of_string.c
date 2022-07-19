#include <stdio.h>
#include <string.h>
void main(){
    char str1[100];
    int i,l=0;
    printf("Input a string: ");
    scanf("%s",str1);
    for (i=0;str1[i]!='\0';i++){
        l++;
    }
    printf("The length of the string %s is %d",str1,l);
}