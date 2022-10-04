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
    void solve(TreeNode* &root,string str,vector<string>&res){
        if(root==NULL) return;
        if(root->left==NULL and root->right==NULL){
            if(str.size()==0){
                str+=to_string(root->val);
            }else{
                str+=("->" + to_string(root->val));
            }
            res.push_back(str);
            return ;
        }
        if(str.size()==0){
            str+=to_string(root->val);
        }else{
            str+=("->" + to_string(root->val));
        }
        solve(root->left,str,res);
        solve(root->right,str,res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        solve(root,"",res);
        return res;
    }
};