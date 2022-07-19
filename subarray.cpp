#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int s,sum=0;
    cin>>s;
    for (int i=0;i<n-1;i++){
        for (int j=i;j<n-1;j++){
            sum+=arr
            [j];
        }
        if (sum==s)
        cout<<i;
    }
}