class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[idx]){
                idx=i;
            }
        }
        int smx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i!=idx){
                smx=max(smx,nums[i]);
            }
        }
        return smx*2<=nums[idx]? idx:-1;
        
    }
};