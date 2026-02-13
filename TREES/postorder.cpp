class Solution {
public:
    void postOrder(TreeNode* root,vector<int> &a){
        if(root==NULL)
        return ;

        postOrder(root->left,a);
        postOrder(root->right,a);
        a.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> a;
        postOrder(root,a);
        return a;

    }
};