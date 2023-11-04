class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>ump;
        
        int res=0;
        
        for(auto &it:time){
            int mod=it%60;
            int target=60-mod;
            if(mod==0){
                target=0;
            }
            if(ump.find(target)!=ump.end()){
                res+=ump[target];
            }
            ump[mod]++;
        }
        
        return res;
    }
};