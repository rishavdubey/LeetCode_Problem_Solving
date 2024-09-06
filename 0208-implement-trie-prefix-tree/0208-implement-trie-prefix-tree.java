 class Trie {

        // Node structure for Trie
        static class Node {
            // Array to store links to child nodes,
            // each index represents a letter
            Node[] links = new Node[26];
            // Flag indicating if the node
            // marks the end of a word
            boolean flag = false;

            // Check if the node contains
            // a specific key (letter)
            boolean containsKey(char ch) {
                return links[ch - 'a'] != null;
            }

            // Insert a new node with a specific
            // key (letter) into the Trie
            void put(char ch, Node node) {
                links[ch - 'a'] = node;
            }

            // Get the node with a specific
            // key (letter) from the Trie
            Node get(char ch) {
                return links[ch - 'a'];
            }

            // Set the current node
            // as the end of a word
            void setEnd() {
                flag = true;
            }

            // Check if the current node
            // marks the end of a word
            boolean isEnd() {
                return flag;
            }
        }
        
        Node root;


        public Trie() {
            root=new Node();
        }

        public void insert(String word) {
            Node node=root;
            for(int i=0;i<word.length();i++){
                if(!node.containsKey(word.charAt(i))){
                    node.put(word.charAt(i),new Node());
                }
                node=node.get(word.charAt(i));
            }
            node.setEnd();

        }

        public boolean search(String word) {
            Node node= root;
            for(int i=0;i<word.length();i++){
                if(!node.containsKey(word.charAt(i))){
                    return false;
                }
                node=node.get(word.charAt(i));
            }
            return node.isEnd();
        }

        public boolean startsWith(String prefix) {
            Node node= root;
            for(int i=0;i<prefix.length();i++){
                if(!node.containsKey(prefix.charAt(i))){
                    return false;
                }
                node=node.get(prefix.charAt(i));
            }
            return true;
        }
    }

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */