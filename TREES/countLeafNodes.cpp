class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        if(root==NULL)
        return 0;
        
        if(root->left==NULL && root->right==NULL)
        return 1;
        int x=countLeaves(root->left);
        int y=countLeaves(root->right);
        return x+y;
        
        
    }
};