class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int curMax=1,curMin=1;
        int res=INT_MIN;
        for(auto &it:nums){
            if(it==0){
                curMax=1,curMin=1;
                res=max(res,0);
                continue;
            }
            int temp=curMax*it;
            curMax=max(temp,max(curMin*it,it));
            curMin=min(temp,min(curMin*it,it));
            res=max(res,max(curMax,curMin));
        }
        return res;
        
    }
};