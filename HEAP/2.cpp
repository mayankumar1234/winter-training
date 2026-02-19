#include<bits/stdc++.h>
using namespace std;
class maxHeap {
    public:
    vector<int> heap;
    // time complaxity-O(logn)
    // space complaxity-O(n)

    void bubbleUp(int id){

        int parent=(id-1)/2;
        while(id>0){
            if(heap[id]>heap[parent]){
                swap(heap[id],heap[parent]);
                id=parent;
            }
            else{
                break;
            }
        }


    }
    void bubbleDown(){
        int i=0;
        int size=heap.size();
    
        while(i<size){
            int left=2*i+1; 
            int right=2*i+2;
            int largest=i;
            if(heap[left]>heap[largest] && left<size){
                largest=left;
            }if(heap[right]>heap[largest] && right<size){
                largest=right;
            }if(largest!=i){
                swap(heap[i],heap[largest]);
                i=largest;
            }
            else{
                break;
            }
        }

    }
    void deleteRoot(){
        swap(heap[0],heap[heap.size()-1]);
        heap.pop_back();
        bubbleDown();
    }
    void insert(int val){
        heap.push_back(val);
        bubbleUp(heap.size()-1);
    }   

};
int main(){
    maxHeap h;
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(15);
    for(int i:h.heap){
        cout<<i<<" ";
    }
}