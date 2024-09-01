class Solution {
public:    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>subset;
        int n=nums.size();
        vector<int>temp;
        getAllSubset(0,n,nums,temp,subset);
        vector<vector<int>>result;
        for(auto it:subset){
            result.push_back(it);
        }
        return result;
    }
    void getAllSubset(int idx,int n,vector<int>nums,vector<int>temp,set<vector<int>>&result){
        if(idx==n){
            sort(temp.begin(),temp.end());
            result.insert(temp);
            return;
        }
        temp.push_back(nums[idx]);
        getAllSubset(idx+1,n,nums,temp,result);
        temp.pop_back();
        getAllSubset(idx+1,n,nums,temp,result);

    }
    
};