#include<bits/stdc++.h>
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
void insertAtTail(Node* &head,int val){
    
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=node;
   
}

void insertAtbegining(Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    node->next=head;
    head=node;
}
void insertAtPosition(int k,Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    if(k==1){
        node->next=head;
        head=node;
        return;
    }   
    Node* temp=head;
    for(int i=1;i<k-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL)
    return;
    node->next=temp->next;
    
    temp->next=node;
    
}
void deletionAtEnd(Node* &head){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}
void deletionAtBeigining(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
}
void deletionAtPosition(Node* &head,int k){
    if(head==NULL){
        return;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    Node* temp=head;
    for(int i=1;i<k-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL || temp->next==NULL)
    return;  
    Node*toDel=temp->next;
    temp->next=temp->next->next;
    delete toDel;
}
void print(Node* head){
    Node* temp=head;
    int k=0;
    while(temp!=NULL){
        
         cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void evenCount(Node* head){
    Node* temp=head;
    int k=0;
    while(temp!=NULL){
        if(temp->data%2==0){
            k++; 
        }
        temp=temp->next;
        
    }
    cout<<k;
}
bool search(Node* head, int key){
   
    if(head->data==key)
    return true;
     return search(head->next,key);
}



int main(){
    Node* head=NULL;
    insertAtbegining(head,1);
    insertAtbegining(head,2);
    insertAtbegining(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtPosition(1,head,6);
    insertAtPosition(4,head,7);
    evenCount(head);
    cout<<endl;
    // deletionAtEnd(head);
    // deletionAtPosition(head,4);
    // deletionAtPosition(head,6);
    // deletionAtBeigining(head);
    // print(head);
    cout<<search(head,7);

    return 0;
}