class Solution {
public:
    void inOrder(TreeNode* root,vector<int> &result){
        if(root==NULL)
        return ;
        inOrder(root->left,result);
        result.push_back(root->val);
        inOrder(root->right,result);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>result;
        inOrder(root,result);
        return result[k-1];
    }
};