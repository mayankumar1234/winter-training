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
class MyStack{
    public:
    Node* top;
    
    MyStack(){
        top=NULL;
        
    }
    void push(int val){
        Node* node=new Node(val);
        node->next=top;
        top=node;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        if(top==NULL) 
        return true;
        return false;
    }
    
};
int main(){
    MyStack s;
    s.push(1);
    s.push(2);  
    s.push(3);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl; 
    cout<<s.isEmpty()<<endl;

}