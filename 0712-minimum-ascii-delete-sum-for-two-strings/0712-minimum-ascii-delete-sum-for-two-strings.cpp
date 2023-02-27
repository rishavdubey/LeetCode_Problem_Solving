
class Solution {
    int goes(string s1,string s2){
        // int cost=0;
        // if(dp[i][j]!=-1){
        //     return dp[i][j];
        // }
        // if(i==s1.length() and j==s2.length()){
        //     cost=0;
        // }else if( i==s1.length()){
        //     cost+=goes(s1,s2,i,j+1) + s2[j];            
        // }else if( j==s2.length()){
        //     cost+=goes(s1,s2,i+1,j) + s1[i];
        // }else if(s1[i]==s2[j]){
        //     cost+=goes(s1,s2,i+1,j+1);
        // }else{
        //     cost+=min((goes(s1,s2,i+1,j)+s1[i]),(goes(s1,s2,i,j+1)+s2[j]));
        // }
//         int n=s1.size();
//         int m=s2.size();
//         vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
//         for(int j=1;j<=m;j++){
//             dp[0][j]=dp[0][j-1] + s2[j];
//         }
//         for(int i=1;i<=n;i++){
//             dp[i][0]=dp[i-1][0] + s1[i-1];
//             for(int j=1;j<=m;j++){
//                 if(s1[i-1]==s2[j-1]){
//                     dp[i][j]=dp[i-1][j-1];
//                 }else{
//                     dp[i][j]=min(dp[i-1][j] + s1[i-1],dp[i][j-1]+s2[j-1]);
//                 }
//             }
//         }
        
//         return dp[n][m];
        
        
        int m = s1.size(), n = s2.size();
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for (int j = 1; j <= n; j++)
            dp[0][j] = dp[0][j-1]+s2[j-1];
        for (int i = 1; i <= m; i++) {
            dp[i][0] = dp[i-1][0]+s1[i-1];
            for (int j = 1; j <= n; j++) {
                if (s1[i-1] == s2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else 
                    dp[i][j] = min(dp[i-1][j]+s1[i-1], dp[i][j-1]+s2[j-1]);
            }
        }
        return dp[m][n];
    }
public:
    int minimumDeleteSum(string s1, string s2) {
        // memset(dp,0,sizeof(dp));
        return goes(s1,s2);
 
    }
};