class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> result= new ArrayList<>();
        Map<String,List<String>> mp= new HashMap<>();
        for(int i=0;i<strs.length;i++) {
            char[] temp=strs[i].toCharArray();
            Arrays.sort(temp);
            String tempStr= new String(temp);
            List<String> tempArray=mp.getOrDefault(tempStr,new ArrayList<>());
            tempArray.add(strs[i]);
            mp.put(tempStr,tempArray);
        }
        mp.forEach((a,b)-> result.add(b));
        return result;
        
    }
}