/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        queue<TreeNode*>q;
        q.push(root);
        if(depth==1){
            TreeNode* node=new TreeNode(val);
            node->left=root;
            return node;
        }
        int level=1;
        while(!q.empty()){
            level++;
            int size=q.size();
            if(level==depth){
                for(int i=0;i<size;i++){
                    auto node=q.front();
                    q.pop();
                    auto left=node->left;
                    auto right= node->right;
                    node->left= new TreeNode(val);
                    node->right= new TreeNode(val);
                    node->left->left =left;
                    node->right->right=right;
                }
                return root;
                
            }else{
                for(int i=0;i<size;i++){
                    auto it=q.front();
                    q.pop();
                    if(it->left) q.push(it->left);
                    if(it->right) q.push(it->right);
                }
            }
            
            
            
        }
        return root;
        
    }
};