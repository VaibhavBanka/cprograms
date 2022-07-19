// //pointer

// #include<stdio.h>
// int main(){
//     int *p,c;
//     c=22;
//     p=&c;
//     printf("%d ",c);
//     printf("%d ",&c);
//     printf("%d ",p);
//     printf("%d ",*p);
// }

// //pointers and arrays

// #include<stdio.h>
// int main(){
//     char x[4]={'1','2','3','4'};
//     int i;
//     for(i=0;i<4;i++){
//         printf("%d ",&x[i]);
//         printf("%d ",*(x+i));
//     }
// return 0;
// }

// //C1;
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int k;
//     scanf("%d",&k);
//     divisible(&a,k,n);
// }
// int divisible(int *v,int k,int n){
//     for (int i=0;i<n;i++){
//         printf("%d ",(*v%k));
//         v++;
//     }
// }

// //Return pointer from function

// #include<stdio.h>
// int main(){
//     int a[]={1,2,3};
//     int *p;
//     p=r(a);
//     printf("%d",*p);
//     return 0;
// }
// int* r(int a[]){
//     a=a+1;
//     return a;
// }

fat