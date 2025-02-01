class Solution {
    public int missingNumber(int[] nums) {
        int len=nums.length;
        int result=0;
        for(int i=0;i<=len;i++){
            result^=i;
        }
        for(int i=0;i<len;i++){
            result^=nums[i];
        }
        return result;
    }
}