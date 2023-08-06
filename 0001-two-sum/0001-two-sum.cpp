class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
    
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(ump.find(temp)!=ump.end()){
                return {ump[temp],i};
            }
            ump[nums[i]]=i;
            
        }
        
        return {};
        
    }
};