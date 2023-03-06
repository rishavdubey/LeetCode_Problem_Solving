class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int mp[2015]={0};
        for(auto &it:arr) mp[it]++;
        
        for(int i=1;i<2010;i++){
            if(mp[i]==0){
                k--;
                if(k==0) return i;
            }
        }
        
        return -1;
    }
};