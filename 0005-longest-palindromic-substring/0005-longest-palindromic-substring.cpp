class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int gap=0;
        bool dp[n][n];
        int start,end;
        int res=0;
        
        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;i++,j++){
                if(gap==0) 
                    dp[i][j]=true;
                else if(gap==1)
                    dp[i][j]=(s[i]==s[j])?true:false;
                else
                    dp[i][j]=(s[i]==s[j] and dp[i+1][j-1])?true:false;
                
                if(dp[i][j]){
                    int size=gap+1;
                    if(res<size){
                        res=size;
                        start=i;
                        end=j;
                    }
                }
            }
        }
        
        string ans="";
        for(int i=start;i<=end;i++){
            ans+=s[i];
        }
        return ans;
        
        
    }
};