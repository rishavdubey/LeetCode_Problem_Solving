class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res(2*n,0);
        int c=0;
        for(int i=0,j=n;i<n;i++,j++){
            res[c++]=nums[i];
            res[c++]=nums[j];
            
        }
        return res;
        
    }
};