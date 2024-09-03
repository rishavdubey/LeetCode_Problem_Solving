class Solution {
    public int getLucky(String s, int k) {
        String intStr="";
        for(int i=0;i<s.length();i++) intStr+=(s.charAt(i)-'a'+1);
        int sum=0;
        while(k>0){
            sum=0;
            for(int i=0;i<intStr.length();i++){
                sum+=(intStr.charAt(i)-'0');
            }
            intStr= String.valueOf(sum);
            k--;
        }
        return sum;
    }
}