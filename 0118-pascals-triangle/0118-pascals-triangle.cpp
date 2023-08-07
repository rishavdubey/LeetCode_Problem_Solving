class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>res;
        res.push_back({1});
        int i=1;
        while(i<numRows){
            vector<int>temp;
            temp.push_back(1);
            for(int j=1;j<res[i-1].size();j++){
                temp.push_back(res[i-1][j-1] + res[i-1][j]);
            }           
            temp.push_back(1);
            res.push_back(temp);
            i++;
        }
        return res;        
    }
};