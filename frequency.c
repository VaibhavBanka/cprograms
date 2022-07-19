#include <stdio.h>
int main(){
    char str[100],ch;
    int count=0;
    printf("Enter the string:");
    gets(str);
    printf("Enter a character:");
    scanf("%c",&ch);
    for (int i=0;str[i]!='\0';i++){
        if (ch==str[i])
        count++;
    }
    printf("The frequency of %c is %d",ch,count);
    return 0;
}