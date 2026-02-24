pair<Node*,Node*>findpredandsuccecesor(Node* root,int key){
        Node* pred=NULL;
        Node* suc=NULL;
        Node* node=root;
        
        // search for the key and track a potential pre/suc---
        
        while(node!=NULL){
            if(key<node->data){
                // curr node iss greater than key - possible successor
                
                suc=node;
                node=node->left;
            }else if(key> node->data){
                pred=node;
                node=node->right;
            }else{
                break;
            }
        }
        
        //if we have found the node with the given key
        
        if(node!=NULL && node->left!=NULL){
            //find the pred(max of the left subtree)
            
            Node* temp=node->left;
            while(temp->right!=NULL){
                temp=temp->right;
            }
            pred=temp;
        }
        
        //find the suc(min of RST)
        
        if(node!=NULL && node->right!=NULL){
            Node* temp=node->right;
            while(temp->left!=NULL){
                temp=temp->left;
            }
            suc=temp;
        }
        return {pred,suc};
    }
    
    vector<Node*> findPreSuc(Node* root, int key) {
         
         pair<Node*,Node*> ans = findpredandsuccecesor(root,key);
         return {ans.first,ans.second};
    }
};