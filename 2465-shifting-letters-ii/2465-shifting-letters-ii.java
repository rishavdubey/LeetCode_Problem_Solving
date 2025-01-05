class Solution {
    public String shiftingLetters(String s, int[][] shifts) {
        int len = s.length();
        int[] calculatedShift = new int[len + 1];
        
        // Calculate the shifts using a difference array
        for (int[] shift : shifts) {
            int start = shift[0];
            int end = shift[1];
            int direction = shift[2] == 0 ? -1 : 1;
            calculatedShift[start] += direction;
            if (end + 1 < len) {
                calculatedShift[end + 1] -= direction;
            }
        }
        
        // Apply the shifts
        int shiftSum = 0;
        StringBuilder res = new StringBuilder();
        for (int i = 0; i < len; i++) {
            shiftSum += calculatedShift[i];
            char ch = doShiftImpl(s.charAt(i), shiftSum);
            res.append(ch);
        }
        
        return res.toString();
    }
    
    private char doShiftImpl(char ch, int n) {
        int charIdx = ch - 'a';
        n = n % 26;
        int sum = (charIdx + n + 26) % 26; // Ensure the result is positive
        return (char) ('a' + sum);
    }
}
