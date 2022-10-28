class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        unordered_map<string,vector<string>>ump;
        for(auto &it:strs){
            string temp=it;
            sort(temp.begin(),temp.end());
            ump[temp].push_back(it);
        }
        for(auto it:ump)
            res.push_back(it.second);
        return res;
        
    }
};