class Solution {
    int KadaneAlgo(vector<int>&nums){
        int curr_max=0;
        int mx=nums[0];
        for(int i=0;i<nums.size();i++){
            curr_max+=nums[i];
            mx=max(curr_max,mx);
            if(curr_max<0)
                curr_max=0;
        }
        return mx;
    }
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total_sum=0;
        for(auto it:nums){
            total_sum+=it;
        }
        int nonCircularMxSum =KadaneAlgo(nums);
        
        
//         After all change -ve to +ve Apply kadane algo to find maxium of -ve sum after that we put some operation on;
        for(int i=0;i<nums.size();i++){
            nums[i]=-nums[i];
        }
        int circularSum = total_sum + KadaneAlgo(nums);
        if(circularSum==0) //This case arises when all the element is -ve so totalSum and KadaneAlgo(nums) is ~ each other 
            return nonCircularMxSum;
        return max(nonCircularMxSum,circularSum);
        
    }
};