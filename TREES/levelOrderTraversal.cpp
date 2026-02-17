class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) { 
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        } 
        queue<TreeNode*>q;
        q.push(root);
      
        while(!q.empty()){
            int levelsize=q.size();
            vector<int> levelelement;
            for(int i=0;i<levelsize;i++){
               TreeNode* frontNode=q.front();
               q.pop();
                levelelement.push_back(frontNode->val);
            if(frontNode->left){
                q.push(frontNode->left);
            }

            if(frontNode->right){
                q.push(frontNode->right);
            }
            }
            ans.push_back(levelelement);
        }   
        return ans;
    }
};