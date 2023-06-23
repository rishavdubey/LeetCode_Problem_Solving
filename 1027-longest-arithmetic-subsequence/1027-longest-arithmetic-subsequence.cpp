class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        vector<vector<int>>dp(1e3,vector<int>(1e3+1,1));
        int n=nums.size(),mv=0;
        for(int i=n-2;i>=0;i--){
            for(int j=i+1;j<n;j++){
                int d=nums[j]-nums[i]+500;
                dp[i][d]=max(dp[i][d],1+dp[j][d]);
                mv=max(mv,dp[i][d]);
            }
        }
        return mv;
    }
};