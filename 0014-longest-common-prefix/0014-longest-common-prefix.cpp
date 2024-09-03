class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0],s2=strs[strs.size()-1],ans="";
        
        for(int i=0;i<min(s1.size(),s2.size());i++){
            if(s1[i]!=s2[i]) break;
            ans+=s1[i];
        }
        return ans;
        
    }
    
    
};