class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &it:grid){
            sort(it.begin(),it.end());
        }
        int res=0;
        for(int j=0;j<grid[0].size();j++){
            int temp=INT_MIN;
            for(int i=0;i<grid.size();i++){
                temp=max(temp,grid[i][j]);
            }
            res+=temp;
        }
        return res;
    }
};