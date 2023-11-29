class Solution {
public:
    int hammingWeight(uint32_t n) {
        long long x=n;
        int c=0;
        while(x>0){
            c+=x&1;
            x=x>>1;
        }
        
        return c;
        
    }
};