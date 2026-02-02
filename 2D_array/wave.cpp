#include<bits/stdc++.h>
using namespace std;
void wave (int a[3][3]){
    for(int j=0;j<3;j++){
        if(j%2==0){
            for(int i=0;i<3;i++){
                cout<<a[i][j]<<", ";
            }
        }
        else{
            for(int i=2;i>=0;i--){
                cout<<a[i][j]<<", ";
            }
        }
    }
    cout<<"END";
}
int main(){
    int a[3][3] = {{5,6,7},{8,9,10},{11,12,2}};
    wave(a);
    return 0;
}