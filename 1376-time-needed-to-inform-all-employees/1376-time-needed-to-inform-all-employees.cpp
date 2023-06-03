class Solution {
    int dfs(int node,vector<int>&informTime ,vector<int>adj[]){
        
        int time=0;
        for(auto it:adj[node])
            time=max(time,dfs(it,informTime,adj));
        return informTime[node] + time;
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        
        vector<int>adj[n];
        
        for(int i=0;i<manager.size();i++){
            if(manager[i]==-1){
               continue;
            }
            adj[manager[i]].push_back(i);
        }
        
        return dfs(headID,informTime,adj);
        
        
    }
};