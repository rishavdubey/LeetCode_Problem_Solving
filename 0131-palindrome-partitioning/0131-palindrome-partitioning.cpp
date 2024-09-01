class Solution {
public:
    bool isPalindrome(string &str,int s,int e){
        while(s<e){
            if(str[s++]!=str[e--]){
                return false;
            }
        }
        return true;
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string>temp;
        solve(0,s.size(),s,temp,result);        
        return result;
    }
    void solve(int idx,int n,string s,vector<string>temp,vector<vector<string>>&result){
        if(idx==n){
            result.push_back(temp);
            return;
        }
        for(int i=idx;i<n;i++){
            if(isPalindrome(s,idx,i)){
                temp.push_back(s.substr(idx,i-idx+1));
                solve(i+1,n,s,temp,result);
                temp.pop_back();
            }
        }
    }
};