class Solution {
public:
    string intToRoman(int num) {
        vector<int>v({1,4,5,9,10,40,50,90,100,400,500,900,1000});
        string s="";
        unordered_map<int,string>ump;
        ump[1]="I";ump[4]="IV";ump[5]="V";ump[10]="X";ump[50]="L";ump[100]="C";ump[500]="D";
        ump[1000]="M";ump[9]="IX"; ump[40]="XL";ump[90]="XC";ump[400]="CD";ump[900]="CM";
        
        while(num>0){
            for(int i=v.size()-1;i>=0;i--){
                if(num-v[i]>=0){
                    s+=ump[v[i]];
                    num=num-v[i];
                    break;
                }
            }        
        }
        return s;
        
        
        
    }
};