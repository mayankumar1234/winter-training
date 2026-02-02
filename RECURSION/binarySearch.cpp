#include<bits/stdc++.h>
using namespace std;
bool binarySearch(int a[],int n, int left, int right, int k){
    if(left>right)
    return false;
    int mid=(left+right)/2;
    if(a[mid]==k)
    return true;
    else if(a[mid]>k)
    return binarySearch(a,n,left,mid-1,k);
    else
    return binarySearch(a,n,mid+1,right,k);
    
}   
int main(){
    int n=5,k=4;
    int a[5]={1,2,3,4,5};
    cout<< binarySearch( a, n,0,n-1,k);
}