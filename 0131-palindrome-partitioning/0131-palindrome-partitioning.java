class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>>result= new ArrayList<>();
        solve(0,s.length(),s,new ArrayList<>(),result);
        return result;
    }

    private void solve(int idx, int length, String s, List<String> temp, List<List<String>> result) {
        if(idx==length){
            result.add(new ArrayList<>(temp));
            return;
        }
        for(int i=idx;i<length;i++){
            if(isPalindrome(s,idx,i)){
                temp.add(s.substring(idx,i+1));
                solve(i+1,length,s,temp,result);
                temp.remove(temp.size()-1);
            }
        }
    }

    private boolean isPalindrome(String str, int s, int e) {
        while(s<e){
            if(str.charAt(s)!=str.charAt(e)){
                return false;
            }
            s++;e--;
        }
        return true;
    }
}