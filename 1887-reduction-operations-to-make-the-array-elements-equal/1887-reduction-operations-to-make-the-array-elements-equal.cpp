class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        vector<int>hash(1e5+10,0);
        int mn=INT_MAX,mx=INT_MIN;
        for(auto &it:nums){
            hash[it]++;
            mx=max(mx,it);
            mn=min(mn,it);
        }
        int sum=0,res=0;
        for(int i=mx;i>mn;i--){
            if(hash[i]){
                sum+=hash[i];
                res+=sum;
            }
        }
        return res;
    }
};