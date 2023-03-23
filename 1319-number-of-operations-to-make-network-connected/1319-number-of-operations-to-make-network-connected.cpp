class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<bool>&vis){
        vis[node]=true;
        for(auto it:adj[node]){
            if(vis[it]==false){
                dfs(it,adj,vis);
            }
        }
        
    }
    
    int makeConnected(int n, vector<vector<int>>& arr) {
        if(arr.size()<n-1) return -1;
        
        vector<int>adj[n];
        for(auto &it:arr){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int cnt=0;
        vector<bool>vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                cnt++;
            }
        }
        
        
        return cnt-1;
        
    }
};