class Solution {
public:
    struct node{
      int value;
      int prevcolor;
      int length;
    };
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto it:redEdges){
            adj[it[0]].push_back({it[1],0});
        }
        for(auto it:blueEdges){
            adj[it[0]].push_back({it[1],1});
        }
        vector<vector<bool>>vis(n,vector<bool>(2,false));
        vis[0][1]=true;
        vis[0][0]=true;
        
        vector<int>dist(n,-1);
        queue<node>q;
        node v;
        v.value=0;
        v.length=0;
        q.push(v);
        
        
        while(!q.empty()){
            node v=q.front();
            q.pop();
            if(dist[v.value]==-1)
                dist[v.value]=v.length;
            
            for(auto it:adj[v.value]){
                int n=it.first;
                int c=it.second;

                if(!vis[n][c] && c!=v.prevcolor){
                    node vertex;
                    vertex.value=n;
                    vertex.prevcolor=c;
                    vertex.length=v.length+1;
                    q.push(vertex);
                    vis[n][c]=true;
                }
            }
            
        }
        
        
        return dist;
    }
};