public class Solution {
    // you need treat n as an unsigned value
    public int reverseBits(int n) {
        int[] bitArray=new int[32];
        int start=0;
        while(start<32){
            bitArray[start]=n&1;
            n=n>>1;
            start++;
        }
        int result=0;
        int factor=1;
        for(int i=31;i>=0;i--){
            result+=(factor*bitArray[i]);
            factor*=2;
        }
        return  result;
        
    }
}