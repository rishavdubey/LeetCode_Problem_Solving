class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx=INT_MIN;
        int smx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(mx<nums[i]-1){
                smx=mx;
                mx=nums[i]-1;
            }else if(smx<nums[i]-1){
                smx=nums[i]-1;
            }
        }
        
        return mx*smx;
    }
};