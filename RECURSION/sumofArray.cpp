#include<bits/stdc++.h>
using namespace std;
int sumofArray(int a[],int n){
    if(n==0)
    return 0;
    int sum=a[0];
    sum+=sumofArray(a+1,n-1);
    return sum;
}
int main(){
    int n=5;
    int a[5]={1,2,3,4,5};
    cout<< sumofArray( a, n);
}