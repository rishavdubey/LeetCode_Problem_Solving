class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int r=grid.size(),c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    q.push({i,j-1});
                    q.push({i+1,j});
                    q.push({i,j+1});
                    q.push({i-1,j});
                }
            }
        }
        int step=0;
        while(!q.empty()){
            step++;
            int size=q.size();
            for(int k=0;k<size;k++){
                int i=q.front().first,j=q.front().second;
                q.pop();
                if(i>=0 and j>=0 and i<r and j<c and grid[i][j]==0){
                    grid[i][j]=step;
                    q.push({i-1,j});
                    q.push({i,j-1});
                    q.push({i+1,j});
                    q.push({i,j+1});
                    
                }
                
            }
        }
        
        return step==1?-1 : step-1;
        
        
    }
};