class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sec=0;
        for(auto &it:nums) sec^=it;
        for(int i=1;i<=nums.size();i++) sec^=i;
        
        int first=0;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i]) -1]>0){
                nums[abs(nums[i]) -1] = -nums[abs(nums[i]) -1 ] ;
            }else{
                first=abs(nums[i]);
            }
        }
        return {first,sec^first};
        
    }
};