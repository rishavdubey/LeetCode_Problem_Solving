class Solution {
    public int characterReplacement(String s, int k) {
        int[] countChar=new int[26];
        int n=s.length();
        int maxCount=0;
        int maxLength=0;
        int left=0;
        for(int right=0;right<n;right++){
            countChar[s.charAt(right)-'A']++;
            maxCount=Math.max(maxCount,countChar[s.charAt(right)-'A']);
            while(right - left +1 - maxCount>k){
                countChar[s.charAt(left)-'A']--;
                left++;
            }
            maxLength=Math.max(maxLength,right-left+1);
        
        }
        return maxLength;
    }
}