/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        long long int s=1,e=n;
        while(s<=e){
            long long int mid=(s+e)/2;
            long long int res=guess(mid);
            if(res==0) return mid;
            if(res==-1)
                e=mid-1;
            else
                s=mid+1;
        }
        return -1;
        
    }
};