class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int size=arr.size();
        if(size==1) return 1;
        
        int curr=1;
        for(int i=1;i<size;i++){
            if(!(abs(arr[i]-arr[i-1])<=1)){
                arr[i]=curr+1;
            }
            curr=max(curr,arr[i]);
        }
        return curr;
        
        
    }
};