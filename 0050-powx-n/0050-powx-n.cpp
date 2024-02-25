class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1.0;
        }
        double pow=myPow(x,n/2);
        double xx=pow;
        xx=xx*xx;
        if(n<0 & n%2==-1){
            return xx*1/x;
        }else if(n>0 && n%2==1){
            return xx*x;
        }else{
            return xx;
        }
    }
};