#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        int m = arr1.size();
        int n = arr2.size();
        int o = arr3.size();

        while (i < m && j < n && k < o) {
            if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
                if(ans.empty()||ans.back()!=arr1[i]){
                ans.push_back(arr1[i]);
                }
                i++; j++; k++;
            }
            else if (arr1[i] < arr2[j]) {
                i++;
            }
            else if (arr2[j] < arr3[k]) {
                j++;
            }
            else {
                k++;
            }
        }
        return ans;
    }
};
int mian() {
    vector<int> arr1 = {1, 5, 10, 20, 40, 80};
    vector<int> arr2 = {6, 7, 20, 80, 100};
    vector<int> arr3 = {3, 4, 15, 20, 30, 70, 80, 120};

    Solution s;
    vector<int> result = s.commonElements(arr1, arr2, arr3);

    for (int x : result) {
        cout << x << " ";
    }
}   