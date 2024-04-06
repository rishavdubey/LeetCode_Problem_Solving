class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res="";
        int op=0;
        int cl=0;
        for(char ch:s){
            if(ch=='('){
                res+=ch;
                op++;
            }else if(ch==')'){
                if(op>0){
                    res+=ch;
                    op--;
                }
            }else{
                res+=ch;
            }
        }
        // cout<<op<<" ";
        string x="";
        if(op){
            reverse(res.begin(),res.end());
            for(int i=0;i<res.size();i++){
                if(res[i]=='(' and op){
                    op--;
                    continue;                    
                }
                x+=res[i];                
            }
            reverse(x.begin(),x.end());
            return x;
        }
        return res;
    }
};