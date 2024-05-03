class Solution {
public:
    int compareVersion(string s1, string s2) {
        int i=0,j=0;
        int n=s1.size();
        int m=s2.size();
        int n1=0,n2=0;
        while(i<n || j<m){
            while(i<n and s1[i]!='.'){
                n1=n1*10 + (s1[i] - '0');
                i++;
            }
            while(j<m and s2[j]!='.'){
                n2=n2*10 + (s2[j] - '0');
                j++;
            }
            if(n1 > n2) return 1;
            if(n1< n2) return -1;
            
            i++;
            j++;
            n1=n2=0;
            
        }
        return 0;
    }
};