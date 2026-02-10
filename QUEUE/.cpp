#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};  
class MyQueue{
    public:
    int* arr;
    int size;
    int front ;
    int rear;
    MyQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==size-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;

    }
    void dequeue(){
        if(front ==-1 || front>rear){
            cout<<"Queue underflow"<<endl;
            return;
        }
        front++;
    }
    void peek(){
        if(front ==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<arr[front]<<endl;
    }
    void printQueue(){
        if(front ==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void isEmpty(){
        if(front ==-1 || front>rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue is not empty"<<endl;
    }    
};
int main(){
    MyQueue q(5);
    q.enqueue(1);
    q.enqueue(2);  
    q.enqueue(3);
    q.printQueue();
    q.dequeue();
    q.printQueue();
    q.peek();
}