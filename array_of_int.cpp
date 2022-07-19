#include <iostream>
using namespace std;
void display(int n);
class data{
    public:
    void read();
};
void read(int n,int arr[]){
    for (int i=0;i<n;i++)
    cin>>arr[i];
}
void display(int n,int arr[]){
    cout<<"The elements are:";
    for (int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}
void largest(int n,int arr[]){
    int l=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>l){
            l=arr[i];
        }
    }
    cout<<"";
    cout<<"The largest element is:"<<l<<endl;
}
void smallest(int n,int arr[]){
    int s=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]<s){
            s=arr[i];
        }
    }
    cout<<"";
    cout<<"The smallest element is:"<<s<<endl;
}
void sum(int n,int arr[]){
    int su=0;
    for (int i=0;i<n;i++)
        su+=arr[i];
    cout<<"The sum of all the elements is:"<<su<<endl;
}
void mean(int n,int arr[]){
    float s=0,mean;
    for (int i=0;i<n;i++)
    s+=arr[i];
    mean=s/n;
    cout<<"The mean is:"<<mean<<endl;
}
int main(){
    int n;
    cout<<"Enter number of elements:";
    cin>>n;
    int arr[n];
    read(n,arr);
    display(n,arr);
    largest(n,arr);
    smallest(n,arr);
    sum(n,arr);
    mean(n,arr);
    return 0;
}
