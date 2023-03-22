class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        
        vector<vector<int>>adj[n+1];
        for(auto &it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
        vector<bool> vis(n+1,false);
        vis[1] = true;              
        
        queue<int>q;
        q.push(1);
        while(!q.empty()){
            int node=q.front();

            q.pop();
            
            for(auto &it:adj[node]){
                if(!vis[it[0]]){
                    vis[it[0]]=true;
                    q.push(it[0]);
                    
                }
            }
        }
        
        int ans=INT_MAX;
        
        for(auto &it:roads){
            if(vis[it[0]] && vis[it[1]]) 
                ans=min(ans,it[2]);
        }
        
        return ans;
        
        
    }
};