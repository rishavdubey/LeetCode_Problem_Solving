class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.size();
        int flag=1;
        long num=0;
        
        for(;i<n;i++){
            if(s[i]!=' ') break;
        }
        
        if(s[i]=='-'){flag=-1;i++;}
        else if(s[i]=='+')i++
            ;
        for(;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                num=num*10 + (s[i]-'0');
                if(flag*num<INT32_MIN){
                    return INT32_MIN;
                }if(flag*num>INT32_MAX){
                    return INT32_MAX;
                }
            }else{
                break;
            }
        }
        
       if(flag*num<INT32_MIN){
                return INT32_MIN;
        }
        if(flag*num>INT32_MAX){
                return INT32_MAX;
        }
        return flag*num;
    }
};