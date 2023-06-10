class Solution {
public:
    bool check(int mid , int index , int maxSum , int n){
        
        // put value mid and index and greedily decrease value  by 1  in left and right subpart
        // since we are given limit of our sum
        // ..1 , 1 , 1 .....mid-2 , mid-1,  MID ,  mid-1 , mid-2 , mid-3 ...1 , 1 , 1..
        if(mid == 0) return true;
       
        int leftLength = index;
        int rightLength = n-1-index;
        long long leftSum=0 , rightSum=0;
        
        // we can take only positive integers therefore we will reduce till one on both side and
        // fill the remaining space with 1
         
        
        // calculations for left subpart
        if(mid<=leftLength){
            leftSum+=mid*1LL*(mid-1);
            // filling 1 in the remainig place since only positive numbers are allowed
            leftSum+=(leftLength)-mid+1;
            leftSum-=(mid*1LL*(mid-1))/2;
        }else{
            leftSum+=(mid*1LL*leftLength);
         
            leftSum-=(leftLength*1LL*(leftLength+1))/2;
        }
        
        // calculations for right subpart
        if(mid<=rightLength){
             rightSum+=mid*1LL*(mid-1);
            // filling 1 in the remainig place since only positive numbers are allowed
            rightSum+=(rightLength)-mid+1;
            rightSum-=(mid*1LL*(mid-1))/2;
        }else{
             rightSum+=(mid*1LL*rightLength);
            rightSum-=(rightLength*1LL*(rightLength+1))/2;
        }
     
        return (maxSum>=(leftSum+rightSum+mid));
    }
    int maxValue(int n, int index, int maxSum) {
        int l=0 , h = 1e9;
        int ans=0;
        while(l<=h){
            int mid = l+(h-l)/2;
             

            if(check(mid , index, maxSum , n)){
               
                ans=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        
        return ans;
        
    }
};