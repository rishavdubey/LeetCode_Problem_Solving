class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        getAllCombinationSum(0,0,n,target,candidates,temp,result);
        return result;
    }
    void getAllCombinationSum(int idx,int sum,int n,int target,vector<int>&arr,vector<int>temp,vector<vector<int>>&result){
        if(idx==n){
            if(sum==target){
                result.push_back(temp);
            }
            return;
        }
        if(target>sum){
            sum+=arr[idx];
            temp.push_back(arr[idx]);
            getAllCombinationSum(idx,sum,n,target,arr,temp,result);
            sum-=arr[idx];
            temp.pop_back();
        }
        getAllCombinationSum(idx+1,sum,n,target,arr,temp,result);
    }
};