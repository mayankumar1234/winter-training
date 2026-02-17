class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        
        if(root==NULL) return ans;
        
        //we will create a map to store the first node at each horizontal distance
        //key-> horizontal distance
        //value->node value
        
        map<int,int> topNode;
        
        //create a queue to store pair of node and horzontal distance
        
        queue<pair<Node*,int>> q;
        
        //start with root at horizontal distance->0
        
        q.push(make_pair(root,0));
        
        while(!q.empty()){
            //extract front pair
            
            pair<Node*,int> frontval=q.front();
            q.pop();
            
            Node* node=frontval.first;
            int hd=frontval.second;
            
            if(topNode.find(hd)==topNode.end()){
                topNode[hd]=node->data;
            }
            
            if(node->left) q.push(make_pair(node->left,hd-1));
            if(node->right) q.push(make_pair(node->right,hd+1));
            
        }
        
        for(auto it:topNode){
            ans.push_back(it.second);
        }
        return ans;
    }
};