class Solution {
public:
    unordered_map<char,int>row;
    void load(){
        string str1="qwertyuiop";
        string str2="asdfghjkl";
        string str3="zxcvbnm";
        
        for(auto it:str1) row[it]=1;
        for(auto it:str2) row[it]=2;
        for(auto it:str3) row[it]=4;
                
    }
    bool solve(string str){
        string temp=str;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        int prev=row[temp[0]];
        for(int i=1;i<temp.size();i++){
            if(prev!=row[temp[i]]) return false;
        }
        return true;
    }
    
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        load();
        for(auto &it:words){
            if(solve(it)) ans.push_back(it);
        }
        return ans;
    }
};