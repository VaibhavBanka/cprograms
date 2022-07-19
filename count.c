#include <stdio.h>
int main() {
    int i=0;
    int arr[10],odd=0,even=0;
    for (i=0;i<10;i++){
        printf("enter the value %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<10;i++){
          if (arr[i]%2==0){
            even++;
        }
          if (arr[i]%2!=0){
            odd++;
        }    
    }
    printf("\nthere are %d even nos",even);
    printf("\nthere are %d odd nos",odd);
    return 0;
}