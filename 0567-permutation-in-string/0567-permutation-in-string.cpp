class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>ump1;
        unordered_map<char,int>ump2;
        if(s1.length()>s2.length())
            return false;
        
        for(char i:s1)
            ump1[i]++;
        
        int size=s1.length();
        for(int i=0;i<size;i++){
            char ch=s2[i];
            ump2[ch]++;
        }
        if(ump1==ump2)
            return true;
        int j=size;
        int i=0;
        
        while(j<s2.length()){
            char ch=s2[j];
            ump2[ch]++;
            ump2[s2[i]]--;
            if(ump2[s2[i]]==0)
                ump2.erase(s2[i]);
            if(ump1==ump2)
                return true;
            j++;
            i++;
            
        }
        return false;
        
    }
};