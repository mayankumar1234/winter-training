#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
   int maxSubarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int cursum=0;
        for(int i=0;i<k;i++){
            cursum+=arr[i];
        }
        int maxsum=cursum;
        for(int i=k;i<n;i++){
             cursum=cursum-arr[i-k]+arr[i];
             if(cursum>maxsum){
                 maxsum=cursum;
             }
        } 
        return maxsum;
   }
}; 
int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    Solution s;
    int result = s.maxSubarraySum(arr, k);

    cout << "Maximum sum of subarrays of size " << k << " is: " << result << endl;
}