class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int diff=INT_MAX;
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int sum=nums[i];
            int s=i+1,e=nums.size()-1;
            while(s<e){
                int temp=nums[s]+nums[e];
                if(diff > abs(target - (sum+temp))){
                    res=sum+temp;
                    diff=abs(target-(sum+temp));
                }
                if(sum+temp>target){
                    e--;
                }else{
                    s++;
                }
            }
        }
        return res;
        
    }
};