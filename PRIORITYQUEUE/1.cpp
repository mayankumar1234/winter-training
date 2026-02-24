// priority queue is a special type of queue in which elements are accesed on basis of priority,
//  not the insetion order
// by default 


#include<iostream>
#include<queue>
using namespace std;

int  main(){
    // (max_heap)
    priority_queue<int> pq_max;
    // (min_heap)
    priority_queue<int,vector<int>,greater<int>> pq_min;

    pq_max.

    pq_max.push(10);
    pq_max.push(20);
    pq_max.push(5);
    pq_max.push(15);

    cout<<"Size: "<<pq_max.size()<<endl;
    while(!pq_max.empty()){
        cout<<pq_max.top()<<" ";
        pq_max.pop();
    }   

}
