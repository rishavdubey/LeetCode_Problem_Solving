class Solution {
    public int passThePillow(int n, int time) {
        time=time%(2*(n-1));
        if(time>=n){
            time=time%(n-1);
            n-=time;           
        }else{
            n=1+time;
        }
        
        return n;
        
    }
}