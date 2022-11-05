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

class Solution {
public:
    Node* root;
public:
    Solution(){
        root =new Node();
    }
    void insertInTrie(string word){
        Node* node=root;
        for(int i=0;i<word.size();i++){
            if(!node->containKey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setEnd();
        
    }
    void dfs(vector<vector<char>>&grid,int i,int j,Node* node,string temp,set<string>&ans){
        if(i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j]=='.') return;
        
        if(node->containKey(grid[i][j])!=NULL){
            temp+=grid[i][j];
            node=node->get(grid[i][j]);
            if(node->isEnd()){
                ans.insert(temp);
            }
            char ch=grid[i][j];
            grid[i][j]='.';
            dfs(grid,i+1,j,node,temp,ans);
            dfs(grid,i-1,j,node,temp,ans);
            dfs(grid,i,j+1,node,temp,ans);
            dfs(grid,i,j-1,node,temp,ans);
            grid[i][j]=ch;
            
        }
        
    }
    
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        for(auto it:words) insertInTrie(it);
        Node* node=root;
        set<string>res;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                node=root;
                if(node->containKey(board[i][j])){
                    dfs(board,i,j,node,"",res);
                
                }
            }
        }
        vector<string>result(res.begin(),res.end());
        return result;
        
        
    }
};