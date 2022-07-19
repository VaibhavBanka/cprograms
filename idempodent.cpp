#include <iostream>
using namespace std;
int main(){
    cout<<"Hello this Suryansh Pandey making idempodent matrix assignment"<<endl;
    cout<<endl;
    int row,col;
    cout<<"Enter number of rows:";
    cin>>row;
    cout<<"Enter number of columns:";
    cin>>col;
    int matrix[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<"Enter element:"<<endl;
            cin>>matrix[i][j];
        }
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int res[row][col];
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            res[i][j]=0;
            for(int k=0;k<row;k++){
                res[i][j]+=matrix[i][k]*matrix[k][j];
            }
        }
    }
    cout<<"The multiplication of the matrix is:"<<endl;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    int flag=1;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if (res[i][j]==matrix[i][j]){
                flag=1;
            }
            else
            flag=0;
            break;
        }
    }
    if (flag==1)
    cout<<"Idempodent matrix";
    else
    cout<<"Not a idempodent matrix";
    return 0;
}