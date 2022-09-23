class Solution {
public:
    long long int mod=1e9 + 7;
    long long int pow=1;
    long long int ans=0;
    int lastBit(int n){
        int cnt=0;
        int res=0;
        while(n>0){
            cnt++;
            if(n&1){
                res=max(res,cnt);
            }
            n=n>>1;
        }
        return res;
    }    
    void powFactor(int n){
        for(int i=0;i<n;i++){
            pow=(pow*(2*(1ll)))%mod;
        }
        pow=(pow)%mod;
    }
    
    int concatenatedBinary(int n) {
        if(n==0) return 0;
        
        while(n>0){
            ans+=(n*pow)%mod;
            ans=ans%mod;
            int b=lastBit(n);
            powFactor(b);   
            n--;
        }
        
        return ans;
    }
};