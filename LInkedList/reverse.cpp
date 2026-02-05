
 
class Solution {
public:
    ListNode* reverseList(ListNode* &head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        // vector<int>arr;
        // ListNode* temp=head;
        // while(temp!=NULL){
        //     arr.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int n=arr.size();
        // int i=0,j=n-1;
        // while(i<j){
        //     swap(arr[i++],arr[j--]);
        // }
        // temp=head;
        // i=0;
        // while(temp!=NULL){
        //     temp->val=arr[i++];
        //     temp=temp->next;
        // }
        // return head;
    }
};
