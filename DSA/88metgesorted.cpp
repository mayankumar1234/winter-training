#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m=nums1.size();
        int n=nums2.size();
        int j=n-1,i=m-1;k=m+n-1;
        while(j>=0){
            if(i>=0 && nums1[i]<nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }else{
                nums1[k]=nums2[j];
                j--;
                k--;
            }
        }
        
        
        

    }
};int main() {
    vector<int> nums1 = {1, 3, 5, 0, 0, 0};
    vector<int> nums2 = {2, 4, 6};
    int m = 3; // Number of valid elements in nums1
    int n = 3; // Number of elements in nums2

    Solution s;
    s.merge(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}