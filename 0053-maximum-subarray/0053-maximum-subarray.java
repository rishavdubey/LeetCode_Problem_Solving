class Solution {
    public int maxSubArray(int[] nums) {
        int maxi=Integer.MIN_VALUE;
        int len=nums.length;

        int sum=0;

        for(int i=0;i<len;i++){
            sum+=nums[i];
            maxi=Math.max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
        
    }
}