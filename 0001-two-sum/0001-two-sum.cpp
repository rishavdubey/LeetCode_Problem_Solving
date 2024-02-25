class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ump;
        int idx1=-1,idx2=-1;
        for(int i=0;i<nums.size();i++){
            if(ump.find(target-nums[i])!=ump.end()){
                idx1=ump[target-nums[i]];
                idx2=i;
                break;
            }
            ump[nums[i]]=i;
        }
        return {idx1,idx2};
    }
};