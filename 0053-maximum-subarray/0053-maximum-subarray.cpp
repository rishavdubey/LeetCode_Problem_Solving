class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int curr_sum=0;
        for(auto &it:nums){
            curr_sum+=it;
            sum=max(sum,curr_sum);
            if(curr_sum<0){
                curr_sum=0;
            }
        }
        return sum;
    }
};