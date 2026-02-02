#include<bits/stdc++.h>
using namespace std;
int linearSearch(int a[],int n,int k){
    if(n==0)
    return 0;
    if(a[0]==k)
    return 1;
    return linearSearch(a+1,n-1,k);
    
} 
int main(){
    int n=5,k=8;
    int a[5]={1,2,3,4,5};
    cout<< linearSearch( a, n,k);
}