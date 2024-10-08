class Solution {
    public int compareVersion(String s1, String s2) {
        int n=s1.length();
        int m=s2.length();
        int n1=0,n2=0,i=0,j=0;
        while(i<n || j<m){
            while(i<n && s1.charAt(i)!='.'){
                n1=n1*10+(s1.charAt(i)-'0');
                i++;
            }
            while(j<m && s2.charAt(j)!='.'){
                n2=n2*10+(s2.charAt(j)-'0');
                j++;
            }
            
            if(n1<n2) return -1;
            if(n1>n2) return 1;
            n1=n2=0;
            i++;
            j++;
        }
        return  0;
        
    }
}