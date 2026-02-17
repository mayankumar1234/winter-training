class Solution {
public:
    void inOrder(TreeNode* root,vector<int> &result){
        if(root==NULL)
        return ;
        inOrder(root->left,result);
        result.push_back(root->val);
        inOrder(root->right,result);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>result;
        inOrder(root,result);
        int n=result.size();
        int l=0,r=n-1;
        while(l<r){
            
            if(result[l]+result[r]==k)
            return true;
            else if(result[l]+result[r]<k)
            l++;
            else
            r--;
        }
        return false;
        
    }
};