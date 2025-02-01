class Solution {
    public int coinChange(int[] coins, int amount) {
        int[] dp= new int[amount+1];
        Arrays.fill(dp,-1);
        int result= coinChange(coins,amount,dp);
        return result==Integer.MAX_VALUE?-1:result;
               
    }
    private int coinChange(int[] coins, int amount,int[] dp){
        if(amount<0) return Integer.MAX_VALUE;
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        int maxCoin=Integer.MAX_VALUE;
        for(int i=0;i<coins.length;i++){
            int res=coinChange(coins,amount-coins[i],dp);
            if(res!=Integer.MAX_VALUE){
                maxCoin=Math.min(maxCoin,res+1);
            }
        }
        return dp[amount]=maxCoin;
    }
}