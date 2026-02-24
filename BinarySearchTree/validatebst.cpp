class Solution {
public:
    bool helper(TreeNode* root,long long min,long long max){
        if(root==NULL)
        return true;
        if(root->val <= min || root->val >= max)
        return false;
        return helper(root->left,min,root->val) && 
        helper(root->right,root->val,max);
    }
    bool isValidBST(TreeNode* root) {
        long long min=LONG_MIN;
         long long max=LONG_MAX;
       return  helper(root,min,max);
    }
};