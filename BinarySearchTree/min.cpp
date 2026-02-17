class Solution {
  public:
    int minValue(Node* root) {
        // code here
       if(root->left==NULL)
       return root->data;
       
       minValue(root->left);
       
    }
};