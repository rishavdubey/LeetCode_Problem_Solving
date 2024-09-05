class Solution {
    public int[] missingRolls(int[] rolls, int mean, int n) {
        
        int size=rolls.length ,sum= Arrays.stream(rolls).sum() , missingSum=0;
        missingSum=mean*(n+size)-sum;

        if(missingSum<n || missingSum>n*6){
            return new int[0];
        }
        int remSum=missingSum%n;
        int []ans =new int[n];
        Arrays.fill(ans,missingSum/n);
        for(int i=0;i<remSum;i++){
            ans[i]+=1;
        }
        return ans;
        
    }
}