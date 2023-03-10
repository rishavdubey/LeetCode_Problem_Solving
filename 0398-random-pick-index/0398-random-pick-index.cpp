class Solution {
public:
    vector<int>arr;
    Solution(vector<int>& nums) {
        arr=nums;
        // for(auto it:arr) cout<<it<<" ";
        // cout<<endl;
        
    }
    
    int pick(int target) {
        int len=1;
        int n=arr.size(),i=0,res;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                res=i;
                break;
            }
        }
        while(i<n){
            int idx=rand()%n;
            if((arr[idx])==target){
                res = idx;
                // cout<<arr[idx]<<" "<<target<<endl;
                // return res;
            }
            
            i++;
            len++;
        }
        return res;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */