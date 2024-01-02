class Solution {
    public List<List<Integer>> findMatrix(int[] nums) {
        int[] map=new int[205];
        Arrays.fill(map,0);
        for(int i=0;i<nums.length;i++){
            map[nums[i]]++;
        }
       List<List<Integer>> ans = new ArrayList<>();
        
        while(true){
            int flag=0;
            ArrayList<Integer>temp =new ArrayList<Integer>();
            for(int i=0;i<=201;i++){
                if(map[i]>0){
                    temp.add(i);
                    map[i]--;
                    flag=1;
                }
            }
            if(flag==0){
                break;
            }
            ans.add(temp);
        }
        return ans;        
        
    }
}