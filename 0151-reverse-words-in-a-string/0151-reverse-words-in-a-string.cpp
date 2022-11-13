class Solution {
public:
    string reverseWords(string s) {
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
        if(temp.size()) v.push_back(temp);
        temp="";
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            temp+=v[i] + " ";
            
        }
        temp+=v[v.size()-1];
        return temp;
    }
};