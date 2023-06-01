class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int step=0;
        queue<pair<int,int>>q;
        q.push({0,0});
        while(!q.empty()){
            step++;
            int size=q.size();
            for(int i=0;i<size;i++){
                auto c=q.front();
                q.pop();
                
                if(c.first>=0 and c.second>=0 and c.first<grid.size() and c.second<grid[0].size() and !grid[c.first][c.second]){
                grid[c.first][c.second]=1;
                if(c.first==grid.size()-1 and c.second==grid[0].size()-1) return step;
                q.push({c.first+1,c.second});
                q.push({c.first-1,c.second});
                q.push({c.first,c.second+1});
                q.push({c.first,c.second-1});
                q.push({c.first+1,c.second+1});
                q.push({c.first+1,c.second-1});
                q.push({c.first-1,c.second+1});
                q.push({c.first-1,c.second-1});

            }
            }
        }
        return -1;
        
    }
};