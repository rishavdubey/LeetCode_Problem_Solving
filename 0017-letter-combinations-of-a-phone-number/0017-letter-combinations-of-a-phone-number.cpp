class Solution {
public:
    void solve(int idx,string digits,string temp,string str[], vector<string>&ans){
        if(idx==digits.size()){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<str[digits[idx]-'0'].size();i++){
            temp+=str[digits[idx]-'0'][i];
            solve(idx+1,digits,temp,str,ans);
            temp.pop_back();
            
        }
    }
    
    vector<string> letterCombinations(string digits) {
        string str[]={"","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>ans;
        if(digits.size()==0)
            return ans;
        solve(0,digits,"",str,ans);
        return ans;
        
    }
};