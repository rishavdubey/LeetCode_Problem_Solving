class Solution {
public:
    string breakPalindrome(string s) {
        int n=s.size();
        if(n==1) return "";
        int i=0,j=n-1;
        while(i<j){
            if(s[i]==s[j] and s[i]!='a'){
                s[i]='a';
                return s;
            }
            i++,j--;
        }
        s[n-1]='b';
        return s;
    }
};