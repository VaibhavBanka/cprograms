#include <iostream>
using namespace std;
class count{
    public:
    int num;
    void input(){
        cin>>num;
    }
    void operator ++(){
        num=num+1;
    }
    void operator --(){
        num=num-1;
    }
    void print(){
        cout<<"The count is:"<<num;
    }
};
int main(){
    count c;
    string b;
    for(int i=0;i<5;i++){
        cin>>b;
        if (b=="Enters")
        ++c;
        else
        --c;
        c.print();
    }
    return 0;
}