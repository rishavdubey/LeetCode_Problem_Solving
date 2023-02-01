class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        if(s1==s2) return s1;
        string res="";
        if(s2.size()>s1.size()) swap(s1,s2); 
        // cout<<s1<<endl<<s2<<endl;
        for(int i=1;i<=s2.size();i++){
            string temp=s2.substr(0,i);
            string t=temp;
            // cout<<t<<" ";
            int flag=0;
            while(temp.size()<s1.size()){
                if(temp==s2){
                    flag=1;
                }
                temp+=t;
                if(temp==s1 and flag==1){
                    res=t;
                    flag=0;
                    // cout<<res<<endl;
                }
            }
        }
        
        // cout<<endl;
        return res;
        
    }
};