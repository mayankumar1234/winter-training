// User function Template for C++
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int pivot=-1;
        // pivot=largest element
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
           pivot=n-1; 
        }
        int low=(pivot+1)%n;
        int high=pivot;
        while(low != high){
            int sum = arr[low]+arr[high];
            if(sum==target)
             return true;
            else if(sum<target) {
                
                low=(low+1)%n;
            }
            else{
                 high=(high-1+n)%n;
            }
            
        }
        return false;
        
    }
};
int main() {
    vector<int> arr = {11, 15, 6, 8, 9, 10};
    int target = 16;

    Solution s;
    bool result = s.pairInSortedRotated(arr, target);

    if (result) {
        cout << "Pair with given sum found." << endl;
    } else {
        cout << "No pair with given sum exists." << endl;
    }
}   