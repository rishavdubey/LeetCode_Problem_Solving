class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        getCombinationSum(0,n,target,candidates,temp,result);
        return result;
        
    }
    void getCombinationSum(int idx,int n,int target,vector<int>&arr,vector<int>temp,vector<vector<int>>& result){
        
        
        if(target==0){
            result.push_back(temp);
            return;
        }
        
        for(int i=idx;i<n;i++){
            if(arr[i]>target) break;
            if(i>idx && arr[i]==arr[i-1]) continue;
            temp.push_back(arr[i]);
            getCombinationSum(i+1,n,target-arr[i],arr,temp,result);
            temp.pop_back();
        }

    }
};