#include<iostream>
using namespace std;
class MyStack{
    public:
    int *arr;
    int top;
    int size;
    MyStack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }  
    void push(int val){
        if(top==size-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    } 
    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        if(top==-1) 
        return true;
        return false;
    }

};
int main(){
    MyStack s(5);
    s.push(1);
    s.push(2);  
    s.push(3);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl; 
    cout<<s.isEmpty()<<endl;

}