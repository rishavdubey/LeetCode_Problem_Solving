class Solution {
public:
    int dp[309][13];
    int solve(vector<int>&a,int d,int i,int n){
        if(d==0){
            if(i==n) return 0;
            else return 1e9;
        }
        if(dp[i][d]!=-1) return dp[i][d];
        if(i==n) return 1e9;
        int ans=1e9;
        
        int ma=a[i];
        for(int j=i;j<n;j++){
            ma=max(a[j],ma);
            ans=min(ans,solve(a,d-1,j+1,n)+ma);
        }
        return dp[i][d]=ans;
    }
    
    int minDifficulty(vector<int>& job, int d) {
        int n=job.size();
        if(n<d) return -1;
        memset(dp,-1,sizeof(dp));
        int ans=solve(job,d,0,n);
        return ans==1e9?-1:ans;
        
        
    }
};