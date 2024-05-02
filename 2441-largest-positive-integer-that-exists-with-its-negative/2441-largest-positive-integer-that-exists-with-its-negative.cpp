class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>ump;
        int res=-1;
        for(auto &it:nums){
            if(ump.find(-it)!=ump.end()){
                res=max(res,abs(it));
            }else{
                ump[it]++;
            }
        }
        return res;
    }
};