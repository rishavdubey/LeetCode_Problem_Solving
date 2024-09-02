class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++) board[i]=s;
        solve(0,n,board,ans);
        return ans;
    }
    void solve(int col,int n,vector<string>&board,vector<vector<string>>&ans){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafetoPlace(row,col,n,board)){
                board[row][col]='Q';
                solve(col+1,n,board,ans);
                board[row][col]='.';
            }
        }
    }
    
    bool isSafetoPlace(int row, int col,int n, vector<string>&board){
        int drow=row,dcol=col;
        while(col>=0 && row>=0){
            if(board[row--][col--]=='Q') return false;
            
        }
        row=drow;
        col=dcol;
        while(col>=0){
            if(board[row][col--]=='Q') return false;
        }
        row=drow;
        col=dcol;
        while(col>=0 && row<n){
            if(board[row++][col--]=='Q') return false;
        }
        return true;
    }
};