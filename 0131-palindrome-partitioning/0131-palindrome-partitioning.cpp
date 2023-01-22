class Solution {
public:
    bool isPalindrome(string str,int s,int e){
        while(s<e){
            if(str[s]!=str[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
    
    void solve(int idx,string s,vector<string>&path,vector<vector<string>>&ans){
        if(idx==s.size()){
            ans.push_back(path);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s,idx,i)){
                path.push_back(s.substr(idx,i-idx+1));
                solve(i+1,s,path,ans);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        solve(0,s,path,ans);
        return ans;
    }
};