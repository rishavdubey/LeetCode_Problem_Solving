class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer>arr = new ArrayList<>();
        for(int i=1;i<=numRows;i++){
            arr.add(1);
            List<Integer> temp=new ArrayList<>(arr);
            for(int j=1;j<arr.size()-1;j++){
                // if(i==4){
                //     System.out.println("arr: " + arr);
                //     System.out.println("temp: " + temp);
                // }
                temp.set(j, arr.get(j)+ arr.get(j - 1));

            }
            // System.out.println("temp at: " + i +"  " + temp);
            result.add(temp);
            arr=new ArrayList<>(temp);
        }
        return result;

    }
}