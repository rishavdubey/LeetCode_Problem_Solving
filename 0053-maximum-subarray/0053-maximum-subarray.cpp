class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int mxSum=INT_MIN;
        for(auto it:nums){
            currSum+=it;
            mxSum=max(mxSum,currSum);
            if(currSum<0){
                currSum=0;
            }
            
        }
        return mxSum;
    }
};