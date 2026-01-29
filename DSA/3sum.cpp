class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        sort(arr.begin(),arr.end());
        // Code Here
        int n=arr.size();
       
        for(int i=0;i<n-2;i++){
           
            int j=i+1,k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum==target){
                    return 1;
                }else if(sum>target){
                    k--;
                }else{
                    j++;
                }
            }
            
        }
        return 0;
    }
};