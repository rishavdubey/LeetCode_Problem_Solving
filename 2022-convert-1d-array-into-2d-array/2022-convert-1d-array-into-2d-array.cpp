class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        if(n*m!=arr.size()) return {};
        vector<vector<int>>res(m,vector<int>(n,0));
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                res[i][j]=arr[idx++];
            }
        }
        return res;
        
    }
};