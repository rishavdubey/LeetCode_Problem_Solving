class Solution {
public:
    int mxProfit(int idx,int buy,int n,int fee,vector<int>&arr,vector<vector<int>>&dp){
        if(idx>=n) return 0;
        int profit;
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        if(buy==0){
            profit = max(0+mxProfit(idx+1,0,n,fee,arr,dp),-arr[idx]+mxProfit(idx+1,1,n,fee,arr,dp));
        }else{
            profit =max(0+mxProfit(idx+1,1,n,fee,arr,dp),arr[idx]-fee + mxProfit(idx+1,0,n,fee,arr,dp));
        }
        return dp[idx][buy]=profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        return mxProfit(0,0,n,fee,prices,dp);
    }
};