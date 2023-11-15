class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int>res(26,0);
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int idx=ch-'a';
            res[idx] += res[idx]==0? -(i+1):i;
        }
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            int idx=ch-'a';
            if(res[idx]!=distance[idx])
                return false;
        }
        return true;
        
        
    }
};