class Solution {
  public:
    // function should print the nodes at k distance from root
    vector<int> Kdistance(Node *root, int k) {
        // Your code here
        vector<int> ans;
        if(root==NULL)
        return ans;
        queue<Node*> q;
        q.push(root);
        int count=0;
        while(!q.empty()){
           
            
            int n=q.size();
            
            for(int i=0;i<n;i++){
                Node* node=q.front();
                q.pop();
                 if(count==k)
                 ans.push_back(node->data);
                 if(node->left) q.push(node->left);
                 if(node->right) q.push(node->right);
                
            }
            count++;
        }
        return ans;
    }
};