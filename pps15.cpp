#include<iostream>
using namespace std;
class Accounts{
    public:
    int sales;
    void set(int sale){
        sales=sale;
    }
    friend int tax(Accounts &a);
};
int tax(Accounts &a){
    return a.sales*0.4;
}
void main(){
    Accounts a1;
    int s;
    cout<<"Enter the purchase amount:"<<endl;cin>>s;
    a1.set(s);
    cout<<"Amount is:"<<tax(a1);
}