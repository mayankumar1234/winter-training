class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {

        if(root == NULL) return -1;

        queue<TreeNode*> q;
        q.push(root);

        vector<long long> levelSum;

        while(!q.empty()){
            int size = q.size();
            long long sum = 0; 

            for(int i = 0; i < size; i++){
                TreeNode* node = q.front();
                q.pop();

                sum += node->val; 
                 
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }

            levelSum.push_back(sum); 
        }
        sort(levelSum.rbegin(), levelSum.rend());

        if(levelSum.size()<k) return -1;
        return levelSum[k-1];  
    }
};