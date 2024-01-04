class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>ump;
        int res=0;
        for(auto &it:nums) ump[it]++;
        
        for(auto it:ump){
            int cnt=it.second;
            if(cnt==1) return -1;
            res+=cnt/3 + (cnt%3>0);

        }
        return res;
    }
};