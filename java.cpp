#include<iostream>
using namespace std;
int main(){
    int e=0,o=0,a,r,c;
    cin>>r;
    cin>>c;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>a;
            if (a%2==0)
            e+=1;
            else
            o+=1;
        }
    }
    if (e<=o){
        cout<<e<<endl;
        cout<<o<<endl;
        cout<<(e*10+o)<<endl;
        if ((e*10+o)%2==0)
        cout<<"1";
        else
        cout<<"0";
    }
    else{
        cout<<o<<endl;
        cout<<e<<endl;
        cout<<(o*10+e)<<endl;
        if ((o*10+e)%2==0)
        cout<<"1";
        else
        cout<<"0";
    }
}