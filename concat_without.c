#include <stdio.h>
#include<string.h>
int main()
{
   char str1[50];
   char str2[50];
   int i,j;
   printf("\nEnter first string: ");
   scanf("%s",str1);
   printf("\nEnter second string: ");
   scanf("%s",str2);
   i=strlen(str1);
   for(j=0; str2[j]!='\0'; ++j, ++i)
   {
      str1[i]=str2[j];
   }
   // \0 represents end of string
   str1[i]='\0';
   printf("\nOutput: %s",str1);
   return 0;
}