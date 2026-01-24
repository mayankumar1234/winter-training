#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int n,int key){
    // sort(a,a+n);
    int l=0,r=n-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]==key){
            return m;
        }
        else if(a[m]<key){
            l=m+1;  
        }
        else{
            r=m-1;
        }   

    }
    return -1;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<binary_search(a,n,k);
}