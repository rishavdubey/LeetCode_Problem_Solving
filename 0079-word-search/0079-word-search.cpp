class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j,string word,int idx,bool &flag){
        if(idx==word.size()){
            flag=true;
            return;
        }
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size()  or grid[i][j]!=word[idx] ) return ;
        if(grid[i][j]=='1')
            return;
        char ch=grid[i][j];
        grid[i][j]='1';
        idx++;
        dfs(grid,i+1,j,word,idx,flag);
        dfs(grid,i-1,j,word,idx,flag);
        dfs(grid,i,j+1,word,idx,flag);
        dfs(grid,i,j-1,word,idx,flag);
        grid[i][j]=ch;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    bool flag=false;
                    dfs(board,i,j,word,0,flag);
                    if(flag)
                        return true;
                }
            }
        }
        return false;
        
    }
};