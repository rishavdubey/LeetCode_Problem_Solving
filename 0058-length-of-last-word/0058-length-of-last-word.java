class Solution {
    public int lengthOfLastWord(String s) {
        int temp=0,res=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
                temp++;
            }else if(ch==' '){
                if(temp>0) res=temp;
                temp=0;
            }else{
                temp=0;
            }
        }
        return temp>0?temp:res;
    }
}