class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long sum=0;
        for(auto &it:nums) sum+=it;
        vector<int>prefix(nums.size(),0);
        for(int i=0;i<nums.size();i++){     
            if(i==0){
                int temp=sum-nums[i];
                if(temp==0)
                    return 0;
                prefix[i]=nums[i];
            }else{
                int temp=sum-prefix[i-1]-nums[i];
                if(temp==prefix[i-1]) return i;
                prefix[i]=prefix[i-1]+nums[i];
        
            }
            
        }
        return -1;
        
        
    }
};