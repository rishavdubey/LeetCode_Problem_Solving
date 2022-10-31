class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        for(int gap=0;gap<m;gap++){
            int c=matrix[0][gap];
            for(int i=0,j=gap;i<n and j<m; i++,j++){
                if(c!=matrix[i][j]) return false;                
            }
        }
        
        for(int gap=1;gap<n;gap++){
            int c=matrix[gap][0];
            for(int i=gap,j=0;i<n and j<m;i++,j++){
                if(c!=matrix[i][j]) return false;
            }
        }     
        return true;
        
    }
};