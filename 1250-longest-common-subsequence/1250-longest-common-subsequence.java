class Solution {
    public int longestCommonSubsequence(String text1, String text2) {
        int[][] dp= new int[text1.length()+1][text2.length()+1];
        for (int[] row : dp) {
            Arrays.fill(row, -1);
        }
        return lcs(text1,text2,0,0,dp);
            
    }
    private int lcs(String s1,String s2, int l1,int l2,int[][] dp){
        if(l1==s1.length() || l2==s2.length()) return 0;
        if(dp[l1][l2]!=-1) return dp[l1][l2];
        if(s1.charAt(l1)==s2.charAt(l2)){
           return dp[l1][l2]=lcs(s1,s2,l1+1,l2+1,dp) + 1;
        }
        return dp[l1][l2]=Math.max(lcs(s1,s2,l1+1,l2,dp),lcs(s1,s2,l1,l2+1,dp));
    }
}