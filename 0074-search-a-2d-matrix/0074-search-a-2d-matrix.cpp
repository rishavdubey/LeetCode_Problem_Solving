class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int s=0;
        int e=n*m-1;
        int mid,row,col;
        while(s<=e){
            mid=(s+e)/2;
            row=mid/n;;
            col=mid%n;
            if(matrix[row][col]==target){
                return true;
            }else if(matrix[row][col]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return false;
        
    }
};

