class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int idx=nums.size();
        
        int s=0,e=nums.size()-1;
        if(nums[0]>=target)
            return 0;
        while(s<=e){
            int mid=(s+e)/2;
            
            if(nums[mid]>=target and nums[mid-1]<target)
                idx=mid;
            if(nums[mid]>target)
                e=mid-1;
            else
                s=mid+1;
        }
        return idx;
        
    }
};