class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<bool>&vis, int &cnt){
        vis[node]=true;
        cnt++;
        for(auto &it :adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,cnt);
            }
        }
        
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<bool>vis(n,false);
        
        vector<long long>count;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                int cnt=0;
                dfs(i,adj,vis,cnt);
                count.push_back(cnt);
                
            }
        }
        
        long long ans=0;
        long long total=0;
        n=1ll*(n);
        // if(count.size()==1 or count.size()==0) return 0;
        for(int i=0;i<count.size();i++){
            ans+=count[i]*(n-total-count[i]);
            total+=count[i];
            
        }
        return ans;
        
        
        
    }
};