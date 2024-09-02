class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result= new ArrayList<>();
        int n=nums.length;
        List<Integer>vis =new ArrayList<>(Collections.nCopies(n,0));
        getAllPermutation(0,n,nums,vis,new ArrayList<>(),result);
        return result;

    }

    private void getAllPermutation(int idx, int n, int[] nums, List<Integer> vis, List<Integer>temp, List<List<Integer>> result) {
        if(idx==n){
            result.add(new ArrayList<>(temp));
            return;
        }
        for(int i=0;i<n;i++){
            if(vis.get(i)==0){
                vis.set(i,1);
                temp.add(nums[i]);
                getAllPermutation(idx+1,n,nums,vis,temp,result);
                vis.set(i,0);
                temp.remove(temp.size()-1);
            }
        }
    }
}