class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>ump;
        set<char>st_s;
        set<char>st_t;
        for(char ch:s)
            st_s.insert(ch);
        for(char ch:t)
            st_t.insert(ch);
        if(st_t.size()!=st_s.size())
            return false;
        for(int i=0;i<s.length();i++){
            char ch1=s[i];
            char ch2=t[i];
            if(ump.find(ch1)==ump.end()){
                ump[ch1]=ch2;
            }else{
                char cc=ump[ch1];
                if(ch2!=cc)
                    return false;
            }
        }
        
        return true;
        
    }
};