class Solution {
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> result=new ArrayList<>();
        Arrays.sort(candidates);
        int n=candidates.length;
        getAllCombinationSum(0,n,target,candidates,new ArrayList<>(),result);
        return result;
    }

    private void getAllCombinationSum(int idx, int n, int target, int[] arr, List<Integer> temp, List<List<Integer>> result) {
        if(target<0){
            return;
        }
        if(idx==n){
            if(target==0){
                result.add(new ArrayList<>(temp));
            }
            return ;
        }
         if(target-arr[idx]>=0){
            temp.add(arr[idx]);
            getAllCombinationSum(idx,n,target-arr[idx],arr,temp,result);
            temp.remove(temp.size()-1);
        }
        getAllCombinationSum(idx+1,n,target,arr,temp,result);
      
    }
}