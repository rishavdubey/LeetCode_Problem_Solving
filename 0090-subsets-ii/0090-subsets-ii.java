class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<List<Integer>>result=new ArrayList<>();
        Arrays.sort(nums);
        int n=nums.length;
        getAllSubsets(0,n,nums,new ArrayList<>(),result);
        return result;
    }

    private void getAllSubsets(int idx, int n, int[] nums, List<Integer> ls, List<List<Integer>> result) {
        if(idx==n){
            result.add(new ArrayList<>(ls));
            return;
        }
        
        if(ls.size()==0 || ls.get(ls.size()-1)!=nums[idx]){
            getAllSubsets(idx+1,n,nums,ls,result);
        }
        ls.add(nums[idx]);
        getAllSubsets(idx+1,n,nums,ls,result);
        ls.remove(ls.size()-1);
        
    }
}