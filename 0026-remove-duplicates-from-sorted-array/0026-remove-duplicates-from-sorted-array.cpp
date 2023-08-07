class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0,j=1,n=arr.size();
        
        while(j<n){
            if(arr[i]!=arr[j]){
                i++;
                if(arr[j-1]!=arr[j]){
                    arr[i]=arr[j];
                }
            }
            j++;
        }
        return i+1;
        
    }
};