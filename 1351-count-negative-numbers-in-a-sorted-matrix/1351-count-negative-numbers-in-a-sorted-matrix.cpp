class Solution {
public:
    int binarySearch(vector<int>arr){
        int idx=-1;
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]<0){
                idx=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return idx;
    }
    
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        int m=grid[0].size();
        for(auto arr:grid){
            int idx=binarySearch(arr);
            if(idx!=-1){
                ans+=(m-idx);
            }
        }
        return ans;
        
    }
};