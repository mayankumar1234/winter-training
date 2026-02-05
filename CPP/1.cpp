// #include<iostream>
// using namespace std;

// int main(){
//     int pin = 1234;
//     int enterpin = 0;

//     while(pin != enterpin){
//         cout << "Enter pin: ";
//         cin >> enterpin;   // ✅ sahi variable
//     }

//     cout << "Access granted";
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int solve(const vector<int>& nums) { 
   
//     vector<int>arr =nums;
   
//     int k=0;
//     sort(arr.begin(),arr.end());
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]!=arr[i]){
//             k++;
//         }
//     }
//     return k;
//  }
//  int main(){
//     int n;
//     cin >> n;

//     vector<int> nums(n);
//     for(int i = 0; i < n; i++){
//         cin >> nums[i];
//     }

//     cout << solve(nums);
// }
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverse(vector<int>& nums,int s,int e){
        while(s<e){
            swap(nums[s++],nums[e--]);
        }
        return;
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);

    }
};
int main(){
    int n,k;
    cin >> n >> k;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    Solution obj;
    obj.rotate(nums,k);
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }
}