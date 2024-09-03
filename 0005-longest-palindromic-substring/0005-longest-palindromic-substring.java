class Solution {
    public String longestPalindrome(String s) {
        int n=s.length();
        boolean[][] dp= new boolean[n][n];
        int start=0;
        int en=0;
        int res=0;

        for(int gap=0;gap<n;gap++){
            for(int i=0,j=gap;j<n;i++,j++){
                if(gap==0)
                    dp[i][j]=true;
                else if(gap==1)
                    dp[i][j]= s.charAt(i) == s.charAt(j);
                else
                    dp[i][j]=(s.charAt(i) == s.charAt(j) && dp[i+1][j-1])?true:false;

                if(dp[i][j]){
                    int size=gap+1;
                    if(res<size){
                        res=size;
                        start=i;
                        en=j;
                    }
                }
            }
        }

        String ans="";
        for(int i=start;i<=en;i++){
            ans+=s.charAt(i);
        }
        return ans;
    }
}