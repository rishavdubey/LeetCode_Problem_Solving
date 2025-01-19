class Solution {
    public int maxVowels(String s, int k) {
        int ans=0;
        int currVowelSum=0;
        for(int i=0;i<k;i++){
            if("AEIOUaeiou".contains(String.valueOf(s.charAt(i)))){
                currVowelSum++;
            }
        }
        ans=currVowelSum;
        for(int i=k;i<s.length();i++){
            if("AEIOUaeiou".contains(String.valueOf(s.charAt(i)))){
                ++currVowelSum;
            }
            if("AEIOUaeiou".contains(String.valueOf(s.charAt(i-k)))){
                --currVowelSum;
            }
            ans=Math.max(ans,currVowelSum);

        }
        return ans;
    }
}