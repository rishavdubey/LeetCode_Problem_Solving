class Solution {
public:
    string countSay(string str){
        char ch=str[0];
        string temp="";
        int cnt=1;
        for(int i=1;i<str.size();i++){
            if(ch!=str[i]){
                temp+=(cnt+'0');
                temp+=ch;
                ch=str[i];
                cnt=0;
            }
            cnt++;
        }
        temp+=(cnt+'0');
        temp+=ch;
        return temp;
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        string ans="1";
        for(int i=2;i<=n;i++){
            ans=countSay(ans);
            
        }
        return ans;
        
        
    }
};