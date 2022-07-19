#include <iostream>
using namespace std;
class v{
    private:
    int meter;
    friend int add(v);
    public:
    v():meter(0){}
};
int add(v i){
i.meter+=10;
cout<<i.meter;
}
int main(){
    v vi;
    cout<<add(vi);
    return 0;
}