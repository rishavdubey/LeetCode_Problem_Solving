class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int s=0,e=arr.size()-1;
        int ans=0;
        while(s<=e){
            if(arr[s]+arr[e]<=limit){
                s++,e--;

            }else{
                e--;
            }
            ans++;
        }
        return ans;
        
    }
};