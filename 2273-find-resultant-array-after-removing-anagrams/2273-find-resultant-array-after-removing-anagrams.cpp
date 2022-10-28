class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>res;
        string prev=words[0];
        sort(prev.begin(),prev.end());
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            string temp=words[i];
            sort(temp.begin(),temp.end());
            if(prev!=temp){
                res.push_back(words[i]);
                prev=temp;
            }
        }
        return res;
        
        
    }
};