class Solution {
    class Tries
    {
        static class Node {
            Node[] links = new Node[2];

            boolean containsKey(int i) {
                return links[i] != null;
            }

            void put(int i, Node node) {
                links[i] = node;
            }

            Node get(int i) {
                return links[i];
            }
        }

        Node root;

        public Tries(){
            root=new Node();
        }
        void insert(int num){
            Node node=root;
            for(int i=31;i>=0;i--){
                int bit=(num>>i)&1;
                if(!node.containsKey(bit)){
                    node.put(bit,new Node());
                }
                node=node.get(bit);
            }
        }
        int findMax(int num){
            Node node=root;
            int maxNum=0;
            for(int i=31;i>=0;i--){
                int bit=(num>>i)&1;
                if(node.containsKey(1-bit)){
                    maxNum=maxNum|(1<<i);
                    node=node.get(1-bit);
                }else{
                    node=node.get(bit);
                }
            }

            return maxNum;
        }
    }

    public int findMaximumXOR(int[] nums) {
        Tries tries=new Tries();
        int ans=0;
        for(int num:nums) tries.insert(num);
        for(int num:nums) ans= Math.max(ans,tries.findMax(num));
        return ans;
    }
}