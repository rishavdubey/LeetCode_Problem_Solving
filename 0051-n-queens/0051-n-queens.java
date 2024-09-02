class Solution {
    public List<List<String>> solveNQueens(int n) {
        List<List<String>> ans = new ArrayList<>();
        String s="";
        for(int i=0;i<n;i++) s+='.';
        List<String>board= new ArrayList<>(Collections.nCopies(n,s));
        solveNQueenProblem(0,n,board,ans);
        return ans;

    }

    private void solveNQueenProblem(int col, int n, List<String> board, List<List<String>> ans) {
        if(col==n){
            ans.add(new ArrayList<>(board));
            return;
        }
        for(int row=0;row<n;row++){
            if(isSafetoPlace(row,col,n,board)){
                StringBuilder newRow = new StringBuilder(board.get(row));
                newRow.setCharAt(col, 'Q'); // Place the queen
                board.set(row, newRow.toString());

                solveNQueenProblem(col+1,n,board,ans);

                newRow.setCharAt(col,'.');
                board.set(row,newRow.toString());
            }
        }
    }
    boolean isSafetoPlace(int row, int col, int n, List<String> board){
        int drow=row,dcol=col;
        while(col>=0 && row>=0){
            if(board.get(row--).charAt(col--)=='Q') return false;

        }
        row=drow;
        col=dcol;
        while(col>=0){
            if(board.get(row).charAt(col--)=='Q') return false;
        }
        row=drow;
        col=dcol;
        while(col>=0 && row<n){
            if(board.get(row++).charAt(col--)=='Q') return false;
        }
        return true;
    }
}