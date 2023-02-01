class Solution {
public:
    int GCD(int a,int b){
        if(a==0) return b;
        if(b==0) return a;
        if(a>b)
            return GCD(a-b,b);
        return GCD(a,b-a);
    }
    int findGCD(vector<int>& nums) {
        int mx=INT_MIN, mi=INT_MAX;
        for(auto it:nums){
            mx=max(mx,it);
            mi=min(mi,it);
        }
        return GCD(mi,mx);
    }
};