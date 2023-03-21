class Solution {
    long long int fact[100000+10];
    long long int mod=1e9+7;
public:
    
    void preload(){
        fact[1]=1;
        for(int i=2;i<=1e5+2;i++){
            fact[i]=i+ fact[i-1];
        }
    
        fact[0]=0;
    
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        preload();
        long long ans=0;
        int prev=0;
        for(auto &it :nums){
            if(it!=0){
                ans+=fact[prev];
                // cout<<prev<<" ";
                prev=0;
                continue;
            }
            prev++;
        }
        ans+=fact[prev];
        return ans;;
    }
};