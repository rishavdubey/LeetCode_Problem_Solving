class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        string temp="";
        for(char ch:s){
            if(ch==' '){
                if(temp.size())
                    v.push_back(temp);
                temp="";
            }else{
                temp+=ch;
            }
        }
        if(temp.size())
            v.push_back(temp);
        if(pattern.size()!=v.size())
            return false;
        set<char>pset;
        set<string>sset;
        for(char ch:pattern)
            pset.insert(ch);
        for(string it:v)
            sset.insert(it);
        if(pset.size()!=sset.size())
            return false;
        unordered_map<char,string>ump;
        for(int i=0;i<pattern.size();i++){
            char ch=pattern[i];
            if(ump.find(ch)==ump.end()){
                ump[ch]=v[i];
                
            }else{
                if(ump[ch]!=v[i])
                    return false;
            }
        }
        return true;           
        
    }
};