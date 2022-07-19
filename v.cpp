#include<iostream>
using namespace std;
class Food{
    public:
    int id;
    int bal;
    void getdata(){
        cout<<"Enter id";
        cin>>id;
        cout<<"Enter balance:";
        cin>>bal;
    }
};
class Customer{
    public:
    string name;
    void getdata1(){
        cout<<"Enter name:";
        cin>>name;
    }
};
class Voucher:public Customer,public Food{
    public:
    int update;
    void up(){
        cout<<"Enter the price of bought item:";
        cin>>update;
        bal=bal-update;
        cout<<"The left amount is:"<<bal;
    }
};
int main(){
    Voucher v;
    v.getdata();
    v.getdata1();
    v.up();
    return 0;
}