class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0,alt=0;
        for(auto &it:gain){
            alt+=it;
            res=max(alt,res);
        }
        return res;
        
        
    }
};