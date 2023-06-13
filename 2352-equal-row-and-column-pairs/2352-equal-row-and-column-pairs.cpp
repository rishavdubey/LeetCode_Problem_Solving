class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>,int>ump;
        for(auto &it:grid){
            ump[it]++;
        }
        int res=0;
        for(int j=0;j<grid[0].size();j++){
            vector<int>v;
            for(int i=0;i<grid.size();i++){
                v.push_back(grid[i][j]);
            }
            if(ump.find(v)!=ump.end()){
                res+=ump[v];
            }
        }
        return res;
    }
};