class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx and sy==fy) return t==0 || t>1;
        return t>= max(abs(sx-fx),abs(sy-fy));
    }
};