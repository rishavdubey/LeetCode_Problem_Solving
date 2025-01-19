class Solution {
    public int longestSubarray(int[] nums) {

                       int left=0,right=0,maxSubArraySize=0,countZero=0,len=nums.length,firstZeroIdx=0;
               while(right<len) {
                   if(nums[right]==0) {
                       countZero++;
                   }
                   while(countZero>1) {
                       if(nums[left]==0) {
                           countZero--;
                       }
                       left++;
                   }
                   maxSubArraySize=Math.max(maxSubArraySize,right-left);
                   
                   right++;
                       
               }
               
               return maxSubArraySize;
        
    }
}