class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int>pre(n),suff(n);
        pre[0]=nums[0];suff[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],nums[i]);
            suff[n-1-i]=min(suff[n-1 - (i-1)],nums[n-1-i]);
        }
    
        int sum=0;
        
        for(int i=1;i<=n-2;i++){
            if(pre[i-1]<nums[i] and nums[i]<suff[i+1]){
                sum+=2;
            }else if( nums[i-1]<nums[i] and nums[i]<nums[i+1]){
                sum+=1;
            }
            
        }
        
        
        return sum;
        
    }
};