// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>arr1;
    int c=0;
    for (int i=0;i<n-2;i++){
        c=((arr[i+1]-arr[i]));
        arr1.push_back(c);
    }
    vector<int>arr2;
    int count=0;
    for (int i=0;i<n-1;i++){
        if(arr1[i]==arr1[i+1])
        count+=1;
        else
        count=0;
        arr2.push_back(count);
        cout<<count<<" ";
    }
    return 0;
}