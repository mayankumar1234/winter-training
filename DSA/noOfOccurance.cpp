#include <iostream>
#include <vector>   
using namespace std;
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int s=0,e=n-1,f=-1,l=-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(arr[m]==target){
               f=m;
               e=m-1; 
            }else if(arr[m]>target){
                e=m-1;
            }else {
                s=m+1;
            }
        }
         s=0,e=n-1;
        while(s<=e){
            int m=s+(e-s)/2;
            if(arr[m]==target){
               l=m;
               s=m+1; 
            }else if(arr[m]>target){
                e=m-1;
            }else {
                s=m+1;
            }
        }
        if(f==-1)
        return 0;
        return (l-f)+1;
    }
};
int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    Solution s;
    int result = s.countFreq(arr, target);

    cout << "Frequency of " << target << " is: " << result << endl;
}