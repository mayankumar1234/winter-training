class Solution {
  public:
    int sumBT(Node* root) {
        // code here
        if(root==NULL)
        return 0;
        int lsum=sumBT(root->left);
        int rsum=sumBT(root->right);
        return root->data+lsum+rsum;
    }
};