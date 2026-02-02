#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4];
    // Taking input in 2D array 
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}