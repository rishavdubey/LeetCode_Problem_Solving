class Solution {
public:
    int noOfside(vector<vector<int>>&grid,int i,int j){
        if(grid[i][j]==0) return 0;
        int cnt=0;
        
        // cheack upper side contribution
        if(i-1<0) cnt+=1;
        else if(grid[i-1][j]==0) cnt+=1;
        
        // cheack right lower side contribution
        if(i==grid.size()-1) cnt+=1;
        else if(grid[i+1][j]==0) cnt+=1;
        
        // cheack left side contribution
        if(j-1<0 ) cnt+=1;
        else if(grid[i][j-1]==0) cnt+=1;
        
        // cheack right side contribution
        if(j==grid[0].size()-1) cnt+=1;
        else if(grid[i][j+1]==0) cnt+=1;
        
        return cnt;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                res+=noOfside(grid,i,j);
            }
        }
        return res;
        
    }
};