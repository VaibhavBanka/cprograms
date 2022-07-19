#include<iostream>
using namespace std;
class student{
    public:
    string name,branch;
    int reg,m1,m2,m3,m4,m5,sum,avg;
    void get(){
    cin>>name;cin>>reg;cin>>m1;cin>>m2;cin>>m3;cin>>m4;cin>>m5;cin>>branch;
    sum=m1+m2+m3+m4+m5;
    avg=sum/5;
    }
};
class ugpg:public student{
    public:
    int extra;string club;int journals; 
    void get1(){
        if (branch=="UG"){
            cin>>extra;cin>>club;
            if (avg>=60 && extra>=2 && club=="Yes")
            cout<<"Cleared UG";
            else
            cout<<"Not Cleared UG";
        }
    }
    void get2(){
        if(branch=="PG"){
            cin>>journals;
            if (avg>=80 && journals>=1)
            cout<<"Cleared PG";
            else
            cout<<"Not Cleared PG";
        }
    }
};
int main(){
    ugpg up;
    up.get();
    up.get1();
    up.get2();
    return 0;
}