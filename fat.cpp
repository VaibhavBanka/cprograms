// //FUNCTION TEMPLATE

// #include<math.h>
// #include<iostream>
// using namespace std;
// template <typename T>
// T power(T n1,int e){
//     T result=pow(n1,e);
//     cout<<result<<endl;
// }
// int main(){
//     int a,n;
//     cin>>a;cin>>n;
//     float b;
//     cin>>b;
//     power(a,n);
//     power(b,n);
//     return 0;
// }

// //CLASS TEMPLATE

// #include<iostream>
// using namespace std;
// template<class T>
// class gen{
//     public:
//     void add(T n1,T n2){
//         cout<<n1+n2<<endl;
//     }
// };
// int main(){
//     gen<int>a;
//     gen<float>b;
//     int v1,v2;
//     cin>>v1;cin>>v2;
//     a.add(v1,v2);
//     float f1,f2;
//     cin>>f1;cin>>f2;
//     b.add(f1,f2);
//     return 0;
// }

// VIRTUAL FUNCTIONS

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     virtual void display(){
//         cout<<"Base"<<endl;
//     }
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"Derived"<<endl;
//     }
// };
// int main(){
//     A *a;
//     B b;
//     a=&b;
//     a->display();
//     return 0;
// }

// //PURE VIRTUAL FUNCTION

// #include <iostream>
// using namespace std;
// class A{
//     public:
//     virtual void display()=0;
// };
// class B:public A{
//     public:
//     void display(){
//         cout<<"derived";
//     }
// };
// int main(){
//     A *a;
//     B b;
//     a=&b;
//     a->display();
//     return 0;
// }

// // FUNCTION OVERLOADING

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     static int add(int a,int b){
//         return (a+b);
//     }
//     static int add(int a,int b,int c){
//         return (a+b+c);
//     }
// };
// int main(){
//     A a;
//     cout<<a.add(3,4)<<endl;
//     cout<<a.add(3,3,4);
//     return 0;
// }

// // static

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     static int num;
//     static int fun(){
//         cout<<num;
//     }
// };
// int A::num=5;
// int main(){
//     A a;
//     a.fun();
// }

// //constructors

// #include<iostream>
// using namespace std;
// class rec{
//     public:
//     int a,b,c;
//     rec(){
//         a=b=c=1;
//         cout<<(a*b*c)<<endl;
//     }
//     rec(int a,int b,int c){
//         cout<<(a*b*c)<<endl;
//     }
//     rec(int a,int b){
//         cout<<(a*b*2)<<endl;
//     }
// };
// int main(){
//     rec r1;
//     rec r2(3,4,5);
//     rec r3(3,4);
//     return 0;
// }

// //objects passed as arguments in function

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a;
//     void set(int i){
//         a=i;
//     }
//     void add(A a1,A a2){
//         a=a1.a+a2.a;
//         cout<<a;
//     }
// };
// int main(){
//     A a1,a2,a3;
//     a1.set(10);
//     a2.set(20);
//     a3.add(a1,a2);
//     return 0;
// }

// //friend function

// #include<iostream>
// using namespace std;
// class A{
//     private :
//     int num;
//     friend int sum(A a);
//     public:
//     A():num(5){}
// };
// int sum(A a){
//     a.num+=5;
//     cout<<a.num;
// }
// int main(){
//     A a1;
//     sum(a1);
//     return 0;
// }

