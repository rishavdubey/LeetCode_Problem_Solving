struct Node{
    Node* links[26];
    bool flag=false;
    
    bool containKey(char ch){
        return links[ch-'a']!=NULL;
    }
    void put(char ch,Node* node){
        links[ch-'a'] = node;
    }
    Node* get(char ch){
        return links[ch-'a'];
    }
    void setEnd(){
        flag=true;
    }
    bool isEnd(){
        return flag;
    }
};
class Trie{
private:
    Node* root;
public:
    Trie(){
        root =new Node();
    }
    void insert(string &word){
        Node* node=root;
        
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();
    }
    bool dfsSearch(string &word,int idx,Node* node){
        if(idx==word.size()) return node->isEnd();
        
        if(word[idx]=='.'){
            for(int i=0;i<26;i++){
                if(node->get('a'+i)){
                    if(dfsSearch(word,idx+1,node->get('a'+i))) return true;
                }
            }
        }else{
            if(node->get(word[idx])!=NULL)
                return dfsSearch(word,idx+1,node->get(word[idx]));
        }
        return false;
        
       
                       
    }
    
    bool search(string &word){
        Node* node=root;
        return dfsSearch(word,0,node);
        
    }
    
};
class WordDictionary {
private:
    Trie trie;
public:
    
    WordDictionary() {
        trie;
    }
    
    void addWord(string word) {
        trie.insert(word);
    }
    
    bool search(string word) {
        return trie.search(word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */