#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int j=0;
        
            for(int i=0;i<n;i=i+k){
                int s=i;
                int e=min(i+k-1,n-1);
                while(s<e){
                    swap(arr[s],arr[e]);
                    s++;
                    e--;
                }
            }
        
        
    }
};
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    Solution s;
    s.reverseInGroups(arr, k);

    cout << "Array after reversing in groups of " << k << ": ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}