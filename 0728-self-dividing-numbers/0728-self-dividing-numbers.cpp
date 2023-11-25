class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>result;
        for(int i=left;i<=right;i++){
            if(isDivisible(i))
                result.push_back(i);
        }
        return result;
        
    }
    
    bool isDivisible(int n){
        int temp=n;
        while(temp>0){
            int d=temp%10;
            temp=temp/10;
            if(d==0 or n%d!=0)
                return false;
        }
        return true;
    }
};