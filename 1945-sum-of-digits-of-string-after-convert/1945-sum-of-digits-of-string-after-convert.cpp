class Solution {
public:
    int getLucky(string s, int k) {
        string intStr="";
        for(auto &it:s) intStr+=to_string(it-'a'+1);
        int sum=0;
        while(k--){
            sum=0;
            for(auto &it:intStr){
                sum+=(it-'0');
            }
            intStr=to_string(sum);
        }
        return sum;
    }
};