#include<bits/stdc++.h>
using namespace std;        
bool isAnagram(string s, string t){
    if (s.length() != t.length()) return false;

        vector<int> freq(26, 0);

        for (char c : s) freq[c - 'a']++;
        for (char c : t) freq[c - 'a']--;

        for (int x : freq) {
            if (x != 0) return false;
        }
        return true;
    }

    // if(s.length()!=t.length())
    // return false;
    // sort(s.begin(),s.end());  
    // sort(t.begin(),t.end());
    // return s==t;

int main(){
    string s="hello";
    string t="hello";
    cout<<isAnagram(s,t);
}

