class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* node=new Node(key);
        Node* temp=head;
        if(head==NULL || head->x>key){
            node->next=head;
            head=node;
            return node;
        }
        Node* prev=NULL:
        Node* curr=head;
        while(curr!=NULL && curr->x<=key){
            prev=curr;
            curr=curr->next;
        }
        prev->next=node;
        node->next=curr;
        return head;
        
    }
};