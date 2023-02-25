class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int n=prices.size();
//         int left[n];
//         int right[n];
//         left[0]=prices[0];
//         for(int i=1;i<n;i++){
//             left[i]=min(left[i-1],prices[i]);
//         }
//         right[n-1]=prices[n-1];
//         for(int i=n-2;i>=0;i--){
//             right[i]=max(right[i+1],prices[i]);
            
//         }
//         int ans=0;
//         for(int i=0;i<n;i++){
//             ans=max(ans,right[i]-left[i]);
//         }
//         return ans;
        
        int mini=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            ans=max(ans,prices[i]-mini);
        }
        return ans;
        
    }
};