class Solution {
public:
    int maxSatisfaction(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int res=INT_MIN;
        for(int i=0;i<n-1;i++){
            int pre=0;
            for(int j=i,c=1;j<n;j++,c++){
                pre+=arr[j]*c;
                res=max(res,pre);
               
                
            }
            res=max(res,pre);
            
        }
        
        return res<=0?0:res;
        
    }
};