class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        unordered_map<char,int>ump;
        ump['a']++,ump['e']++,ump['i']++,ump['o']++,ump['u']++;
        ump['A']++,ump['E']++,ump['I']++,ump['O']++,ump['U']++;
        
        
        while(i<j){
            if(ump[s[i]]>0 and ump[s[j]]>0){
                swap(s[i],s[j]);
                i++;
                j--;
            }else if(ump[s[i]]>0){
                j--;
            }else{
                i++;
            }
        }
        return s;
        
    }
};