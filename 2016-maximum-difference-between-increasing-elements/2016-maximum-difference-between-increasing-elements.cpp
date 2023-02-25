class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int res=INT_MIN;
        int mini=INT_MAX;
        for(auto &it:nums){
            mini=min(it,mini);
            res=max(res,it-mini);            
        }
        
        
        return res==0 ? -1:res;
        
    }
};