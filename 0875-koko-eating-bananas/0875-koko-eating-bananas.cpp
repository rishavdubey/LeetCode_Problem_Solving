class Solution {
public:
    int completeEat(vector<int>&arr,long long int x,int h){
        long long int cnt=0;
        for(long long int it:arr){
            cnt+=it/x;
            if(it%x) cnt+=1;
        }
        return cnt<=h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int maxi=piles[0];
        for(auto it:piles) maxi=max(it,maxi);
        int high=maxi;
        int ans=high;
        
        while(low<=high){
            int mid=(low+ high)>>1;
            if(completeEat(piles,mid,h)){
                high=mid-1;
                ans=mid;
            }else{
                low=mid+1;
            }
            
        }
        return ans;
        
    }
};