class Solution {
    public boolean isPalindrome(int x) {
        char[] arr= Integer.toString(x).toCharArray();
        int end=arr.length-1;
        int start=0;
        while (start<end) {
            if(arr[start]!=arr[end]) return false;
            start++;end--;
        }
        return true;
    }
}