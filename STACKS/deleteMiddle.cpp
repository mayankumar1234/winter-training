class Solution {
  public:
    // Function to delete middle element of a stack.
    void deletefromstack(stack<int>& s,int count,int n){
        if(s.empty() || count==n/2){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        deletefromstack(s,count+1,n);
        s.push(temp);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();
        int count =0;
        deletefromstack(s,count,n);
       
    }
};
   
