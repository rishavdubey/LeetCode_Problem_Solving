class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int e=n-1,s=0;
        int res=0;
        while(s<e){
            res=max(res,nums[s++]+nums[e--]);
        }
        return res;
    }
};