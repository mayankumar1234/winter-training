class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        vector<int>nge(n);
        // code here
        for(int i=n-1;i>=0;i--){
            // remove all the smaller and equal elements to curr element
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
                  
            }
            if(st.empty()){
                nge[i]=-1;
            }
            else{
                nge[i]=st.top();
            }
            
            st.push(arr[i]);
        }
        return nge;
    }
     
};