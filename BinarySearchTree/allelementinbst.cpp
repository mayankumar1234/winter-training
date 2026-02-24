class Solution {
public:  
    void inorder(TreeNode* root,vector<int> &arr1){
        if(root==NULL)
        return ;
        inorder(root->left,arr1);
        arr1.push_back(root->val);
        inorder(root->right,arr1);
    }
    vector<int> merge(vector<int> &a,vector<int> &b){
         vector<int> ans;
        int i = 0, j = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] < b[j])
                ans.push_back(a[i++]);
            else
                ans.push_back(b[j++]);
        }

        while (i < a.size()) ans.push_back(a[i++]);
        while (j < b.size()) ans.push_back(b[j++]);

        return ans;
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> arr1,arr2;
        inorder(root1,arr1);
        inorder(root2,arr2);
        return merge(arr1,arr2);
    }
};