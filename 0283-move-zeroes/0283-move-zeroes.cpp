class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int i=-1,j=0;
        int n=arr.size();
        while(j<n and i<j){
            if(arr[j]!=0){
                if( i!=-1 and arr[i]==0 ){
                    swap(arr[i],arr[j]);
                   i++;
                }
               
            }
            if(i==-1 and arr[j]==0){
                i=j;
            }
            j++;
            
        }
    }
};