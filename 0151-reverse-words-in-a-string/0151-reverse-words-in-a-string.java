class Solution {
    public String reverseWords(String s) {
          List<String> ls= new ArrayList<>(List.of(s.trim().split("\\s+")));
        Collections.reverse(ls);
        return ls.stream().collect(Collectors.joining(" "));
        
    }
}