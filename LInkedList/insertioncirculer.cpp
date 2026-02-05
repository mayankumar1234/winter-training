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
void insertAtEnd(Node* &head,int val){
    Node* node =new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node->next=head;
    temp->next=node;
}
void insertAtBegining(Node* &head,int val){
     Node* node =new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){    
        temp=temp->next;
    }
    node->next=head;
    temp->next=node;
    head=node;
}
void insertAtPosition(int k ,Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp=head;
    if(k==1){
        while(temp->next!=head){
            temp=temp->next;
        }
        node->next=head;
        temp->next=node;
        head=node;
        return;
    }
    for(int i=1;i<k-1;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;
}
void deletionAtEnd(Node* &head){
    if(head==NULL)
    return ;
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    Node* toDel=temp->next;
    temp->next=head;
    delete toDel;

}
void deletionAtBegining(Node* &head){
    if(head==NUll){
        return;
    }
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node*toDel=temp->next;
    head=head->next;
    temp->next=head;
    delete toDel;
    
}
void deletionAtPosition(int k,Node* &head){
    if(head==NULL)
    return;
    if(head->next==head){
        delete head;
        head==NULL;
        return;
    }
    Node* temp=head;
    if(k==1){
        while(temp->next!=head){
        temp=temp->next;
    }
    Node*toDel=temp->next;
    head=head->next;
    temp->next=head;
    delete toDel;
    }
    for(int i=1;i<k-1;i++){
       temp=temp->next; 
    }
    Node* toDel=temp->next;
    temp->next=temp->next->next;
    delete toDel;
    
    
}
void print(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    Node* head=NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtBegining(head,4);
    insertAtBegining(head,5);
    insertAtPosition(1,head,6);
    insertAtPosition(5,head,7);
    deletionAtEnd(head);
    deletionAtBegining(head);

    print(head);
}