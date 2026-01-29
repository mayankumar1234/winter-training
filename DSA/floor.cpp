
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int s=0,e=n-1,ans=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(arr[m]==x){
            ans=m;
            s=m+1;
            }else if(arr[m]<x){
                ans=m;
                s=m+1;
            }else{
                e=m-1;
            }
        }
        return ans;
    }
};
int main() {
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int x = 9;

    Solution s;
    int result = s.findFloor(arr, x);

    if (result != -1) {
        cout << "Floor of " << x << " is at index: " << result << endl;
    } else {
        cout << "No floor found for " << x << endl;
    }
}