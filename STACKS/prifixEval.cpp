#include<bits/stdc++.h>
using namespace std;
int prefixVal(string s){
    stack<int>st;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>=0 && s[i]<=9){
            st.push(s[i]-'0');
        }else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            int ans;
            switch(s[i]){
                case '+':
                    ans=op1+op2;
                    break;
                case '-':
                    ans=op1-op2;
                    break;
                case '*':
                    ans=op1*op2;
                    break;
                case '/':
                    ans=op1/op2;
                    break;
            }
            st.push(ans);
        }

    }
    return st.top();


}
int main() {
    string s;
    cin>>s;
    cout<<prefixVal(s);

}