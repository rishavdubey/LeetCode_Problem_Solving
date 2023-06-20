class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1 and k==0) return nums;
        vector<int>avg(n,-1);
        if(n<=k) return avg;
        long long int div=k*2+1;
        long long int sum=0;
        for(int i=0;i<div-1;i++) sum+=nums[i];
        for(int i=k;i<n-k;i++){
            sum+=nums[i+k];
            avg[i]=sum/div;
            sum-=nums[i-k];
        }
    
        return avg;
        
    }
};