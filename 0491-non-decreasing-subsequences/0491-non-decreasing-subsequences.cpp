class Solution {
public:
    vector<vector<int>>res;
    set<vector<int>>s;
    void solve(int idx,int n,vector<int>&nums,vector<int>temp){
        if(idx==n){
            if(temp.size()>1)
                s.insert(temp);
            return;
        }
        if(temp.size()==0 or temp[temp.size()-1]<=nums[idx]){
            temp.push_back(nums[idx]);
            solve(idx+1,n,nums,temp);
            if(temp.size())
                temp.pop_back();
        }
        solve(idx+1,n,nums,temp);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int>temp;
        solve(0,nums.size(),nums,temp);
        for(auto it:s){
            res.push_back(it);
        }
        return res;
    }
};