class Solution {
    public int maxArea(int[] height) {
        int area=0;
        int right=height.length-1;
        int left=0;
        while(left<right){
            int high=Math.min(height[left],height[right]);
            area=Math.max(area,high*(right-left));
            if(height[left]<height[right]){
                left++;
            }else {
                right--;
            }
        }
        return area;
    }

}