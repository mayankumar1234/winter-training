#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="hello";
    int n=str.length();
    int j=n-1;
    int s=0;
    while(s<j){
        swap(str[s],str[j]);
        s++;
        j--;
    }
    cout<<str;
}