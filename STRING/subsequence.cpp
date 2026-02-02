#include<bits/stdc++.h>
using namespace std;

    bool isSubsequence(string s, string t) {
         int j=0,i=0;
       
           
            while(j<t.size()&&i<s.size()){
                if(s[i]==t[j]){
                    i++;
                    j++;
                }else{
                    j++;
                }
            }
            return i==s.size();
            }
int main(){
    string s="abc", t="ahbgdc";
    cout<< isSubsequence(s,t);
}