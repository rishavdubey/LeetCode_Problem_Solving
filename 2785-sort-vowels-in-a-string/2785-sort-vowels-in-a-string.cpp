class Solution {
public:
    string sortVowels(string s) {
        vector<int>idx;
        vector<char>vowels;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='a' or ch=='A' or ch=='e' or ch=='E' or ch=='i' or ch=='I' or ch=='o' or ch=='O' or ch=='u' or ch=='U' ){
                idx.push_back(i);
                vowels.push_back(ch);
            }
        }
        sort(vowels.begin(),vowels.end());
        for(int i=0;i<idx.size();i++){
            s[idx[i]]=vowels[i];
        }
        return s;
    }
};