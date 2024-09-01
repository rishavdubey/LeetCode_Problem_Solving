class Solution {
    public String getPermutation(int n, int k) {
        int fact=1;
        List<Integer> nums=new ArrayList<>();

        for(int i=1;i<n;i++){
            fact*=i;
            nums.add(i);
        }
        nums.add(n);
        k=k-1;
        String result="";
        while(true){
            result+=nums.get(k/fact).toString();
            nums.remove(k/fact);
            if(nums.isEmpty()) break;
            k=k%fact;
            fact/=nums.size();

        }
        return result;
    }
}