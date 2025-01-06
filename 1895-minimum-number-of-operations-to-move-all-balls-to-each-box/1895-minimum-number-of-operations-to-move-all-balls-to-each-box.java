class Solution {
    public int[] minOperations(String boxes) {
    
        HashSet<Integer> ls = new HashSet<>();

        int[] leftSum = new int[boxes.length()];
        int[] leftCount = new int[boxes.length()];

        int totalSum =0;
        for(int i=0; i<boxes.length(); i++){

            leftSum[i] = totalSum;
            leftCount[i] = ls.size();

            if(boxes.charAt(i) == '1'){
                ls.add(i);    
                totalSum += i;
            }
            
        }

        int ones = ls.size();
        int[] ans = new int[boxes.length()];

        for(int i=0; i<boxes.length(); i++){
            int sum =0;
            if(ls.contains(i)){
                int leftSide = Math.abs(leftSum[i]-leftCount[i]*i);
                int rightSide = Math.abs(((ones-1-leftCount[i]) * i) - ((totalSum-leftSum[i])-i));
                sum = leftSide+rightSide;
            }else{
                int leftSide = Math.abs(leftSum[i]-leftCount[i]*i);
                int rightSide = Math.abs(((ones-leftCount[i]) * i) - (totalSum-leftSum[i]));
                sum = leftSide+rightSide;   
            }
            ans[i] = sum;
        }
        return ans;
        
    }
}