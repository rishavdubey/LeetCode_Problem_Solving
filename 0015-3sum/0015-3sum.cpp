class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0) break;
            
            if(i!=0 and nums[i-1]==nums[i]) continue;
            
            int j=i+1;
            int k=n-1;
            while(j<k and nums[k]>=0){
                int temp=nums[i]+nums[j]+nums[k];
                if(temp==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k and nums[j-1]==nums[j]) j++;
                    while(j<k and nums[k]==nums[k+1]) k--;
                }else if( temp>0){
                    k--;
                }else{
                    j++;
                }
                
            }
              
        }

        return res;
        
    }
};