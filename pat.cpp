#include<iostream>
using namespace std;
class get{
    public:
    int type;
    char isbn[15];
    char title[20];
    char author[20];
    int year;
    void getdata(){
        cin>>type;
        cin>>isbn;
        cin>>title;
        cin>>author;
        cin>>year;
    }
    void print(){
        cout<<isbn<<endl;
        cout<<title<<endl;
    }
};
class books:public get{
    public:
    int pages;
    void get1(){
        if (type==0){
            cin>>pages;
        }
    } 
    void put1(int price){
        price=pages;
        cout<<price;
    }   
};
class cd:public get{
    int min;
    public:
    void get2(){
        if (type==1){
            cin>>min;
        }
    }
    void put2(){
        cout<<(2*min);
    }
};
int main(){
    int pric;
    books b1;
    cd c1;
    get g1;
    g1.getdata();
    b1.get1();
    c1.get2();
    g1.print();
    b1.put1(pric);
    c1.put2();
    return 0;
}