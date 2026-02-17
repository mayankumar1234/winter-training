class Solution {
public:
    TreeNode* helper(vector<int>& nums,int low,int high){
        if(low>high) return NULL;

        int mid = low+(high-low)/2;

        TreeNode* current = new TreeNode(nums[mid]);  

        current->left = helper(nums,low,mid-1);
        current->right =helper(nums,mid+1,high);

        return current;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        return helper(nums,low,high);
    }
};