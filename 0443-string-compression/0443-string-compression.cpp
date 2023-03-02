class Solution {
public:
    
    int compress(vector<char>& chars) {
        string str="";
        for(char it:chars) str+=it;
        
        int ch=str[0];
        int cnt=1;
        string temp="";
        for(int i=1;i<str.size();i++){
            if(ch!=str[i]){
                temp+=ch;
                if(cnt>1)
                    temp+=to_string(cnt);
                ch=str[i];
                cnt=0;
            }
            cnt++;
        }
        temp+=ch;
        if(cnt>1)
            temp+=to_string(cnt);
        
        for(int i=0;i<temp.size();i++){
            chars[i]=temp[i];
        }
        return temp.size();
        
        
    }
};