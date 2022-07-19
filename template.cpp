#include<iostream>
#include<math.h>
using namespace std;
template<typename T>
T power(T n1,int e){
    if (e>=0){
    T result=pow(n1,e);
    cout<<result;
    }
    else{
    int f=(-e);
    T result=pow(n1,f);
    cout<<result;
    }
}
int main(){
    power<int>(2,3);
    power<int>(2,-3);
    power<float>(2.0,4);
    return 0;
}
