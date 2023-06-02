class Solution {
    #define ll long long
    int dfs(int i, int &count,vector<vector<int>>& adj, vector<bool>& vis) {
        // Base Case
        if(vis[i])
            return 0;
        count++;
        vis[i] = true;
        // int count = 1;
        for (auto it : adj[i]) {
            if (!vis[it])
                dfs(it, count, adj, vis);
        }
        return count;
    }
    long long int getDist(int x1,int x2,int y1,int y2)
    {
        long long int a = pow((x2-x1),2);
        long long int b = pow((y2-y1),2);
        // ll dist = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        return a+b;
    }
public:
    // Time -> O(N*N + N*N*N) or O(N^3)
    // Space -> O(N*N)(Recursive Stack Space)
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        vector<vector<int>>adj(n);//Adj list to store graph

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(i==j)continue;
                // Calculate distance btw centres
                int x1 = bombs[i][0],x2 = bombs[j][0];
                int y1 = bombs[i][1],y2 = bombs[j][1];
                long long int dist = getDist(x1,x2,y1,y2);
                // Check if bomb[i] can detonate bomb[j]
                // It can if radius[i]>=dist
                long long int r1 = bombs[i][2];
                long long int r2 = bombs[j][2];
                if(r1*r1>=dist)//add j as edge to i
                    adj[i].push_back(j);
                if(r2*r2>=dist)
                    adj[j].push_back(i);
                //r1*r1 is imp because r1>=sqrt(dist)will   
                //not work, it will if you use double
            }
        }
        
        // We have a graph, now question becomes:
        // Find the maximum connected nodes
        int maxBombs = 0;
        
        for(int i=0;i<n;i++)
        {
            vector<bool>vis(n);
            int count=0;
            dfs(i,count,adj,vis);
            maxBombs = max(maxBombs,count);
        }
        return maxBombs;
    }
};