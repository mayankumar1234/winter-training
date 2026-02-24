class Solution {
public:
    void dfs(int city,vector<vector<int>>& isConnected,vector<int>
    &visited){
        visited[city]=true;
        for(int neighbourCity=0;neighbourCity<isConnected.size();neighbourCity++){
            if(isConnected[city][neighbourCity]==1 && !visited[neighbourCity]){
                dfs(neighbourCity,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>visited(n,false);
        int provinceCount=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i,isConnected,visited);
                provinceCount++;
            }
        }
        return  provinceCount;

    }
};