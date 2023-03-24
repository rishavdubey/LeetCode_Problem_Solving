class Solution {
    void dfs(int node,vector<int>adj[],vector<bool>&vis,int &cnt){
        vis[node]=true;
        for(auto it:adj[node]){
            if(!vis[abs(it)]){
                if(it>0)
                    cnt++;
                dfs(abs(it),adj,vis,cnt);
            }
        }
    }
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        
        vector<int>adj[n];
        for(int i=0;i<connections.size();i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(-connections[i][0]);
        }
        vector<bool>vis(n,false);
        int ans=0;
        dfs(0,adj,vis,ans);
        return ans;
        
        
    }
};