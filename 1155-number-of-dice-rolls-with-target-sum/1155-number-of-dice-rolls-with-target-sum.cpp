class Solution {
public:
    int mod=1e9 + 7;

    int numRollsToTarget(int n, int k, int t) {
        vector<vector<int>>dp(n+5,vector<int>(t+5,0));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=t;j++){
                long c=0;
                for(int x=1;x<=k;x++){
                    if(x<=j) c+=((dp[i-1][j-x])%mod);
                }
                dp[i][j]=int(c%mod);
            }
        }
        return dp[n][t];
    }
    

};