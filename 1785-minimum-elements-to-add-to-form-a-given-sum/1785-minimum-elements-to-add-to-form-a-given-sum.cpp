class Solution {
public:
    int minElements(vector<int>& nums, long long int limit, long long int goal) {
        long long int sum=0;
        for(auto &it:nums) sum+=it;
        long long int req = abs(goal - sum);
        return req/limit +( req%limit==0 ? 0:1);
    }
};