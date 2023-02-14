class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        
        int i=a.length()-1,j=b.length()-1;
        int c=0;
        while(i>=0 and j>=0){
            int x=a[i]-'0';
            int y=b[j]-'0';
            int temp=x+y+c;
            s+=to_string(temp%2);
            c=temp/2;
            i--;
            j--;
        }
        while(i>=0){
            int x=a[i]-'0';
            int temp=x+c;
            s+=to_string(temp%2);
            c=temp/2;
            i--;
        }
        while(j>=0){
            int x=b[j]-'0';
            int temp=x+c;
            s+=to_string(temp%2);
            c=temp/2;
            j--;
        }
        if(c)
            s+=to_string(c);
        reverse(s.begin(),s.end());        
        return s;
    }
};