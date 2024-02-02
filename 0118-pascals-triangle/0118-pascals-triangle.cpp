class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        
        vector<int>res;
        
        for(int i=0;i<numRows;i++){
            res.resize(i+1);
            res[0]=res[i]=1;
            int temp=res[0];
            for(int j=1;j<i;j++){
                int c=res[j];
                res[j]=temp+res[j];
                temp=c;
            }
            ans.push_back(res);
        }
        return ans;
        
    }
};