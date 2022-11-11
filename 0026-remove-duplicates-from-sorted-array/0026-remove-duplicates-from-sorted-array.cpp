class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        if(nums.size()==0){
            return c;
        }
        int k=nums[0];
        c=1;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(k!=nums[i]) {
                c++;
                k=nums[i]; 
                j++;
                
            }
            nums[j]=nums[i];
        }
        return c;
        
    }
};