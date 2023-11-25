class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int size=nums.size();
        
        vector<int>result(size,0);
        vector<int>prefixSum(size,0);
        prefixSum[0]=nums[0];
        
        for(int i=1;i<size;i++){
            prefixSum[i]= prefixSum[i-1]+nums[i];
        }
        
        result[0]=prefixSum[size-1] - nums[0]*size;
        
        for(int i=1;i<size;i++){
            int rightSum=prefixSum[size-1] - prefixSum[i];
            int leftSum=prefixSum[i-1];           
            result[i]=abs(leftSum-nums[i]*i) + abs(rightSum - nums[i]*(size-(i+1)));   
        }
        
        return result;        
        
        
    }
};