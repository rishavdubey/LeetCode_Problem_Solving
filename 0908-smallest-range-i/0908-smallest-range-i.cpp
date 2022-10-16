class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mx=nums[0],mi=nums[0];
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            mi=min(mi,nums[i]);
        }
        return max(0,mx - mi - 2*k);
    }
};