class Solution {
public:
    bool checkValidString(string s) {
        int cmax=0,cmin=0;
        for(char ch:s){
            if(ch=='('){
                cmax++;
                cmin++;
            }else if (ch==')'){
                cmax--;
                cmin--;
            }else{
                cmax++;
                cmin--;
            }
            
            if(cmax<0) return false;
            cmin=max(cmin,0);
        }
        return cmin==0;
    }
};