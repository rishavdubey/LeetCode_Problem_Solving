class Solution {
    public int[] xorQueries(int[] arr, int[][] queries) {
        int n=arr.length;
        int[] preXor= new int[n];
        preXor[0]=arr[0];
        for(int i=1;i<n;i++){
            preXor[i]=preXor[i-1]^arr[i];
        }
        
        int m=queries.length;
        int[] result=new int[m];
        for(int i=0;i<m;i++){
            int s=queries[i][0];
            int e=queries[i][1];
            if(s==0){
                result[i]=preXor[e];
            }else{
                result[i]=preXor[s-1]^preXor[e];
            }
        }
        return result;
    }
}