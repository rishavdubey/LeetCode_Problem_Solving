class Solution {
   public int waysToSplitArray(int[] nums) {
       long currSuffixSum = 0;
       for (int i = nums.length - 1; i >= 0; i--) {
           currSuffixSum += nums[i];
       }
       long currPrefixSum = 0;

       int numSplits = 0;
       for (int i = 0; i < nums.length - 1; i++) {
           currSuffixSum -= nums[i];
           currPrefixSum += nums[i];
           if (currPrefixSum >= currSuffixSum) numSplits++;
       }

       return numSplits;
   }
}