#include <iostream>
#include <vector>   
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int n=nums.size();
       int s=0,e=n-1;
       while(s<e){
        int m=s+(e-s)/2;
        if(nums[m]<nums[m+1]){
           
            s=m+1;
        }else {
            e=m;
        }
       } 
       return s;
    }
};
int main() {
    vector<int> nums = {1, 2, 1, 3, 5, 6, 4};

    Solution s;
    int peakIndex = s.findPeakElement(nums);

    cout << "Peak element is at index: " << peakIndex << endl;
}