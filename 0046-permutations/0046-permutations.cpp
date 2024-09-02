class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>result;
        int n=nums.size();
        vector<int>vis(n,0);
        vector<int>temp;
        sort(nums.begin(),nums.end());
        getAllPermutation(0,n,nums,vis,temp,result);
        return result;        
    }
    
    void getAllPermutation(int idx,int n,vector<int>&nums,vector<int>vis,vector<int>temp,vector<vector<int>>&result){
        if(idx==n){
            result.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vis[i]=1;
                temp.push_back(nums[i]);
                getAllPermutation(idx+1,n,nums,vis,temp,result);
                temp.pop_back();
                vis[i]=0;
            }
            
        }
    }
};