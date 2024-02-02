class Solution {
private:
    void makeZero(vector<vector<int>>& matrix,int i,int j){
        for(int r=0;r<matrix.size();r++){
            matrix[r][j]=0;
        }
        for(int c=0;c<matrix[0].size();c++){
            matrix[i][c]=0;
        }
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>v;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    v.push_back({i,j});
                }
            }
        }
        
        for(auto it: v){
            makeZero(matrix,it.first,it.second);
        }
    
    }
};