class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx=0;
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]){
                mx=nums[i];
                idx=i;
            }
        }
        int cnt=0,res=0;
        for(int i=idx;i<nums.size();i++){
            if(mx==nums[i]){
                ++cnt;
                res=max(res,cnt);
            }else{
                cnt=0;
            }
        }
        
        return res;
        
    }
};