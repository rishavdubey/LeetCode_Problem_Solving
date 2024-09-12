class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hash[26]={0};
        int cnt=0;
        for(int i=0;i<allowed.size();i++){
            hash[allowed[i]-'a']=1;
        }
        for(int i=0;i<words.size();i++){
            int flag=0;
            for(int j=0;j<words[i].size();j++){
                if(hash[words[i][j]-'a']==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cnt++;
        }
        return cnt;
        
    }
};