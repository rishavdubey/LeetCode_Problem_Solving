class Solution {
    public int countSeniors(String[] details) {
        int res=0;
        for(int i=0;i<details.length;i++){
            int num=(details[i].charAt(11)-'0') * 10 + (details[i].charAt(12)-'0')*1;
            if(num>60){
                res++;
            }
        }
        return res;
    }
}