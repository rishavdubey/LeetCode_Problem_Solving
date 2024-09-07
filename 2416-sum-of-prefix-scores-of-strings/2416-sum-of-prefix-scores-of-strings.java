class Solution {    
 class PrefixTrie{
        static class Node{
            Node[] link=new Node[26];
            int prefix=0;
            boolean containsKey(char ch){
                return link[ch-'a']!=null;
            }
            void put(char ch,Node node){
                link[ch-'a']=node;
            }
            Node get(char ch) {
                return link[ch - 'a'];
            }
            void prefixIncrement(){
                prefix+=1;
            }
            int getPrefix(){
                return prefix;
            }
            
        }
        Node root;
        public PrefixTrie(){
            root= new Node();
        }
        
        void insert(String word){
            Node node=root;
            for(int i=0;i<word.length();i++){
                if(!node.containsKey(word.charAt(i))){
                    node.put(word.charAt(i),new Node());                    
                }
                node=node.get(word.charAt(i));
                node.prefixIncrement();
            }
        }
        
        int prefixSum(String word){
            int sum=0;
            Node node=root;
            for(int i=0;i<word.length();i++){
                node=node.get(word.charAt(i));
                sum+=node.getPrefix();
            }
           
            return sum;
            
        }
    }

    public int[] sumPrefixScores(String[] words) {
        int n=words.length;
        int [] result= new int[n];
        PrefixTrie trie= new PrefixTrie();
        for(int i=0;i<n;i++){
            trie.insert(words[i]);
        }
        
        for(int i=0;i<n;i++){
            result[i]=trie.prefixSum(words[i]);
        }
        return result;

    }
}