class Solution {
    public void setZeroes(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        boolean firstRow=false,firstColumn=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    if(i==0){
                        firstRow=true;
                        // System.out.println("True in i");
                    }
                    if(j==0){
                        firstColumn=true;
                    }
                    matrix[0][j]=matrix[i][0]=0;
                }
                
            }
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstRow){
            // System.out.println("Inside FirstRow");
            for(int j=0;j<m;j++) matrix[0][j]=0;
        }
        if(firstColumn){
            for(int i=0;i<n;i++) matrix[i][0]=0;
        }

    }
}