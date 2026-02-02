#include<bits/stdc++.h>
using namespace std;
void print(int n){
    if(n>10)
    return;
    print(n+2);
    cout<<n<<" ";
    // if(n==0)
    // return;
    
    // print(n-2);
    // cout<<n<<" ";
}
int main(){
    int n=2;
    print(n);
}