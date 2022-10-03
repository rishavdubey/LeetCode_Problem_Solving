class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int mCost=0;
        int n=colors.size();
        int i=0;
        while(i<n){
            int sum=neededTime[i];
            int mx=neededTime[i];
            while(i+1<n and colors[i]==colors[i+1]){
                sum+=neededTime[i+1];
                mx=max(mx,neededTime[i+1]);
                i++;
            }
            mCost +=(sum-mx);
            i++;
        }
        return mCost;
        

    }
};