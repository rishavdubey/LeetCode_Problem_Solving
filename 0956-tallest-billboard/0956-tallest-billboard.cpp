class Solution {
public:
//f denotes the length of wall1 which should be equal to wall 2 
//diff=wall1-wall2
int f(int i ,int diff,vector<int>& rods,vector<vector<int>>& dp){
    if(i==rods.size()){
     if(diff==0)return 0;//I have to add nothing in wall1 length
     else
           return INT_MIN;//I cant find answer in this combination
}

    if(dp[i][diff+5000]!=-1)return dp[i][diff+5000];
    //dont add length in wall 1 and wall2
    int op1 = f(i+1,diff,rods,dp);

    //add length in wall1
    int op2 = rods[i]+f(i+1,rods[i]+diff,rods,dp);//(rods[i]+wall1-wall2)

    //add length in wall2//but our function returns length of wall 1 only
    int op3 = f(i+1,diff-rods[i],rods,dp);//wall1-wall2-rods[i])
      return dp[i][diff+5000]= max({op1,op2,op3});
}
    int tallestBillboard(vector<int>& rods) {
        int n = rods.size();
        vector<vector<int>> dp(n,vector<int>(10002,-1));
        return f(0,0,rods,dp);
    }
};