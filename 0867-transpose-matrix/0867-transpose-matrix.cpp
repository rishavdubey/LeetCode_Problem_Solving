class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>>res;
        for(int j=0;j<matrix[0].size();j++){
            vector<int>vi;
            for(int i=0;i<matrix.size();i++)
                vi.push_back(matrix[i][j]);
            res.push_back(vi);
        }
        return res;
    }
};