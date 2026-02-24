class Solution {
public:

    TreeNode* inordersuccesor(TreeNode* node){
        while(node->left!=NULL){
            node=node->left;
        }
        return node;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL){
            return NULL;
        }   
        if(key< root->val){
            root->left=deleteNode(root->left,key);
        }
        else if(key> root->val){
            root->right=deleteNode(root->right,key);
        }
        else{
            // case 1: node has no left child
            // in this replace the node with its right child
            if(root->left==NULL){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }

            //case2: node has no right child
            // in this replace the node with its left child

            else if(root->right==NULL){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }

            // CASE3: NODE HAS TWO CHILDREN

            //find the inordersuccessor 
           TreeNode* temp=inordersuccesor(root->right);
           //copy the successor in the node which we were
            // supposed to delete--

           root->val=temp->val;

           //delete teh successor from right sub 
        //    tree(as we hv already copied the value)
           root->right=deleteNode(root->right,temp->val);

        }
        return root;
    }
};