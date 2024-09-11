class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        for(int i=31;i>=0;i--){
            int startBit=(start>>i)&1;
            int goalBit =(goal>>i) & 1;
            // cout<<startBit<< " "<<goalBit<<endl;
            if(startBit!=goalBit) cnt++;
        }
        return cnt;
    }
};