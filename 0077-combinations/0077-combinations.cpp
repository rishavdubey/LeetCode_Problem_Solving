class Solution {
    void AllCombination(int n, int idx,int k,vector<vector<int>>&v,vector<int>vi,vector<int>freq){
        if(k==0){
            v.push_back(vi);
            return ;            
        }
        if(idx<=n-k) AllCombination(n,idx+1,k,v,vi,freq);
        vi.push_back(idx);
        AllCombination(n,idx+1,k-1,v,vi,freq);
    
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>v;
        vector<int>vi;
        vector<int>freq(n+1,0);
        AllCombination(n,1,k,v,vi,freq);
        return v;
    }
};