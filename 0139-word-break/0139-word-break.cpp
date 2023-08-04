class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int>ump;
        for(auto it:wordDict){
            ump[it]++;
        }
        
        vector<int>dp(s.size()+1,0);
        dp[0]=1;
        
        for(int i=1;i<=s.size();i++){
            for(int j=0;j<i;j++){
                if(dp[j]){
                    if(ump.find(s.substr(j,i-j))!=ump.end())
                        dp[i]=1;
                }
            }
        }
        
        return dp[s.size()]==1;
    }
};