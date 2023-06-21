class Solution {
private:
    long long findCost(vector<int>& nums, vector<int>& cost, int cnvrt){
        long long ct = 0;
        for(int i=0; i<nums.size(); i++){
            int oprt = abs(nums[i] - cnvrt);
            ct += 1LL * oprt * cost[i];
        }
        return ct;
    }
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        int l = nums[0];
        int r = nums[0];
        for(auto it : nums){
            l = min(l,it);
            r = max(r,it);
        }
        long long ans = 0;
        while(l <= r){
            int mid = l + (r - l)/2;

            long long c1 = findCost(nums,cost,mid);
            long long c2 = findCost(nums,cost,mid+1);

            ans = min(c1,c2);

            if(c1 < c2){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};