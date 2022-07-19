// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int n;cin>>n;
    vector<int>arr1;
    int arr[n];
    for (int i=0;i<n;i++)
    cin>>arr[i];
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n-1;j++){
            if (arr[i]==arr[j])
            arr1.push_back(i+1);
        }
    }
    cout<<arr1[0];
    return 0;
}