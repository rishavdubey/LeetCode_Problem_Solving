class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int preSum=0;
        unordered_map<int,int>ump;
        ump[0]=1;
        int res=0;
        
        for(int i=0;i<n;i++){
            preSum+=nums[i];
            int target=preSum-k;
            if(ump.find(target)!=ump.end()){
                res+=ump[target];
            }
            ump[preSum]++;
        
        }
        return res;
        
    }
};