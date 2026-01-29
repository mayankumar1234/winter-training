#include<bits/stdc++.h>
using namespace std;    
void removeDuplicate(string str){
    vector<bool> visited(256,false);
    string  result="";
    for(char i : str){
        if(!visited[i]){
            result.push_back(i);
            visited[i]=true;
        }
    }
    return result;
}
int main(){
    string str="hello";
    cout<<removeDuplicate(str);
}
