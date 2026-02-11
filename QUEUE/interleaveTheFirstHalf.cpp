class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
         int n=q.size();
         int k=n/2;
         queue<int> q1;
         
         for(int i=0;i<k;i++){
             q1.push(q.front());
             q.pop();
         }
         while (!q1.empty()) {
            q.push(q1.front());
            q1.pop();

            q.push(q.front());
            q.pop();
        }
         
    }
};