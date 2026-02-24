int countNodes(Node* root){
    if(root==NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

bool isCBT(Node* root,int idx,int count){
    if(root==NULL) return true;

    if(idx >= count) return false;

    return isCBT(root->left,2*idx+1,count) &&
           isCBT(root->right,2*idx+2,count);
}

bool isMaxOrderHeap(Node* root){

    if(root==NULL) return true;

    if(root->left==NULL && root->right==NULL)
        return true;

    if(root->right==NULL){
        return (root->data >= root->left->data) &&
               isMaxOrderHeap(root->left);
    }
    else{
        bool left = isMaxOrderHeap(root->left);
        bool right = isMaxOrderHeap(root->right);

        return (root->data >= root->left->data && root->data >= root->right->data && left && right); 
    }
}

class Solution {
  public:
    bool isHeap(Node* tree) {

        int total = countNodes(tree);

        if(isCBT(tree,0,total) && isMaxOrderHeap(tree))
            return true;

        return false;
    }
};