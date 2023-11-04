class Solution {
public:
    bool cheack(vector<int>&v , int k){
        for(int i=1;i<=k;i++){
            if(v[i]==0){
                return false;
            }
        }
        return true;
    }
    
    int minOperations(vector<int>& nums, int k) {
        vector<int> v(51,0);
        
        int res=0;
        for(int i=nums.size()-1;i>=0;i--){
            res++;
            v[nums[i]]=1;
            if(cheack(v,k)){
                break;
            }
        }
        return res;
        
    }
};