class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+3,0);
        if(s[0]=='0')
            return 0;
        if(n==1)
            return 1;
        
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0'){
                dp[i]=0;
            }
            else{
                dp[i]=dp[i+1];
            }
            if(i<n-1 and (s[i]=='1' or (s[i]=='2' and s[i+1]<='6'))){
                dp[i]+=dp[i+2];            
            }
        }
        return dp[0];            
               
        
    }
};