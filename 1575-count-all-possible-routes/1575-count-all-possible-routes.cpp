class Solution {
public:
    int dp[101][201];
    int n,mod=1e9+7;
    long long int dfs(vector<int>&v,int cur,int fused,int finish,int fuel){
        if(dp[cur][fused]!=-1)return dp[cur][fused];
        long long int res=0;
        if(cur==finish){   
            res++;
        }
        for(int i=0;i<n;i++){
            if(cur==i)continue;
            int x=abs(v[cur]-v[i]);
            if(x+fused > fuel)continue;
            res+=dfs(v,i,fused+x,finish,fuel)%mod;
            res%=mod;
        }
        return dp[cur][fused]= res;
    }
    int countRoutes(vector<int>& v, int start, int finish, int fuel) {
        n=v.size();
        memset(dp,-1,sizeof(dp));
        if(abs(v[start]-v[finish])>fuel)return 0;
        return dfs(v,start,0,finish,fuel)%mod;
    }
};