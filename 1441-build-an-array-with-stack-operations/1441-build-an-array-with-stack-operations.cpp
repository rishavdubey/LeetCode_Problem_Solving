class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>res;
        int x=1;
        for(auto it : target){
            while(x!=it){
                res.push_back("Push");
                res.push_back("Pop");
                    x++;
                }
            res.push_back("Push");
            x++;          
            
        }
        return res;
    }
};