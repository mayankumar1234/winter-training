class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& num1, vector<int>& num2) {

        unordered_map<int,int> mp;
        vector<int> ans;
        int n=num2.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=num2[i]){
                st.pop();
            }
            if(st.empty()){
                mp[num2[i]]=-1;
            }
            else{
                mp[num2[i]]=st.top();
            }
            st.push(num2[i]);
        }
        for(int i=0;i<num1.size();i++){
             ans.push_back(mp[num1[i]]);
        }
        return ans;
    }
};