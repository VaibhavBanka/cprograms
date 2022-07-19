#include<iostream>
using namespace std;
class A{
public:
int number;
void get1(){
    cout<<"A";
    cin>>number;
    cout<<number;
}
};
class B:public virtual A{
    public:
    int b;
    void get2(){
    cout<<"B";
    cin>>b;
    cout<<b;

};
class C:public virtual A{
    public:
    int c;
    void get3(){
    cout<<"C";
    cin>>c;
    cout<<c;
};
int main(){
    B objb;
    C objc;
    objb.get1();
    objb.get2();
    objc.get3();
    return 0;
}
