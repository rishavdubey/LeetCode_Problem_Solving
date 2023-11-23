class Solution {
public:
    bool isAP(vector<int>&arr){
        sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            if(arr[i]-arr[i-1]!=diff){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>result;
        int m=l.size();
        for(int i=0;i<m;i++){
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++){
                temp.push_back(nums[j]);
            }
            result.push_back(isAP(temp));
            
        }
        return result;
    }
};