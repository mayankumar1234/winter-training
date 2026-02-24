#include<bits/stdc++.h>
using namespace std;    
int  main(){
    int m,n;
    cout<<"Enter the number of vertices and edges: ";   
    cin>>m>>n;
    unordered_map<int,list<int>> adjList;
    for(int i=0;i<n;i++){
       int u,v;
       cin>>u>>v;

       adjList[u].push_back(v);
         adjList[v].push_back(u);
    }
    cout<<"Adjacency List: "<<endl;
    for(auto i:adjList){

        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<" ";
        }        cout<<endl;

    }


}