class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        left[0]=height[0];
        right[n-1]=height[n-1];
        
        for(int i=1;i<n;i++){
            left[i]=max(height[i],left[i-1]);
            right[n-1 - i]=max(height[n-1 -i],right[n-1 - i + 1]);
        }
        int res=0;
        for(int i=0;i<n;i++){
            res+=min(left[i],right[i]) - height[i];
        }
        return res;
    }
};