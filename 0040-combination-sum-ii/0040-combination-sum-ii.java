class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> result=new ArrayList<>();
        Arrays.sort(candidates);
        int n=candidates.length;
        getAllCombinationSum(0,n,target,candidates,new ArrayList<>(),result);
        return result;
    }

    private void getAllCombinationSum(int idx, int n, int target, int[] arr, List<Integer> temp, List<List<Integer>> result) {
      
        if(target==0){
            result.add(new ArrayList<>(temp));
            return;
        }
        for(int i=idx;i<n;i++) {
            if(arr[i]>target) break;
            if(i>idx && arr[i]==arr[i-1]) continue;
            temp.add(arr[i]);
            getAllCombinationSum(i+1, n, target - arr[i], arr, temp, result);
            temp.remove(temp.size()-1);
        }
    }
}