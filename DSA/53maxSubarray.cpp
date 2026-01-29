#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ms=nums[0],cs=0;
        
        for(int i=0;i<n;i++){
            cs=cs+nums[i];
            if(cs>ms)
            ms=cs;
            if(cs<0)
            cs=0;
        }
        return ms;
    }
};
int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    Solution s;
    int maxSum = s.maxSubArray(nums);

    cout << "Maximum subarray sum is: " << maxSum << endl;
}