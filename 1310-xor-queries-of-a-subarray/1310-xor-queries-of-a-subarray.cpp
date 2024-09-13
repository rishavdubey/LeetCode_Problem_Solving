class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size();
        vector<int>preXor(n);
        preXor[0]=arr[0];
        for(int i=1;i<n;i++) preXor[i]=preXor[i-1]^arr[i];
        
        vector<int>result;
        for(auto &it:queries){
            int s=it[0],e=it[1];
            if(s==0){
                result.push_back(preXor[e]);
            }else{
                result.push_back(preXor[e]^preXor[s-1]);
            }
        }
        return result;

    }
};