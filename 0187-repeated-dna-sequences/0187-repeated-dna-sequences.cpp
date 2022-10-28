class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>ump;
        vector<string>res;
        string temp="";
        int m=10<s.size()?10:s.size();
        for(int i=0;i<m;i++){
            temp+=s[i];
        }
        ump[temp]++;
        for(int i=10;i<s.size();i++){
            temp=temp.substr(1);
            temp+=s[i];
            ump[temp]++;
        }
        for(auto it:ump)
            if(it.second>1)
                res.push_back(it.first);
                
        return res;
        
    }
};