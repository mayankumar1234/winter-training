class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelsize=q.size();
            
            for(int i=0;i<levelsize;i++){
                TreeNode* node=q.front();
                
                q.pop();
                ans.push_back(node->val);
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
            }
            
        }
        return ans;
    }
};