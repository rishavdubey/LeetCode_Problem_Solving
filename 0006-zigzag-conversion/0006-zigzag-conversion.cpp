class Solution {
public:
    string convert(string s, int r) {
        unordered_map<int,vector<char>>ump;
        int n=s.size();
        
        int c=0;
        int flag=0;;
        while(c<n){
            for(int i=1;i<=r;i++){ 
                ump[i].push_back(s[c]);
                c++;
                if(c==n){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
            for(int i=r-1;i>1;i--){
                ump[i].push_back(s[c]);
                c++;
                if(c==n){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        
        string res="";
        for(int i=1;i<=r;i++){
            for(auto it:ump[i]){
                res+=it;
            }
        }
        return res;
        
    }
};