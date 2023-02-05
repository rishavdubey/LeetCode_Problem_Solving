class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>v;
        string temp="";
        unordered_map<char,int>ump1;
        unordered_map<char,int>ump2;
        for(char it:p)
            ump1[it]++;
        for(int i=0;i<p.size();i++)
            ump2[s[i]]++;
        
        if(ump1==ump2)
            v.push_back(0);
        for(int j=p.size();j<s.size();j++){
            ump2[s[j-p.size()]]--;
            if(ump2[s[j-p.size()]]==0){
                ump2.erase(s[j-p.size()]);
            }
            ump2[s[j]]++;
            
            if(ump1==ump2){
                v.push_back(j-p.size()+1);
            }
            
        }
        return v;
        
    }
};