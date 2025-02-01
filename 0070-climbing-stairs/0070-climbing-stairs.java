class Solution {
    public int climbStairs(int n) {
        int[] dp= new int[n+1];
        Arrays.fill(dp,-1);
        return climbStairs(n,0,dp);        
    }
    private int climbStairs(int n,int idx,int[] dp){
        if(idx>n) return 0;
        if(idx==n) return 1;
        if(dp[idx]!=-1) return dp[idx];
        return dp[idx]=climbStairs(n,idx+1,dp)+climbStairs(n,idx+2,dp);
    }
}