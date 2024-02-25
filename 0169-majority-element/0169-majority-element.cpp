class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0];
        int count=0;
        for(auto &it:nums){
            if(res==it){
                count++;
            }else{
                count--;
            }
            if(count==0){
                res=it;
                count=1;
            }
        }
        return res;
        
    }
};