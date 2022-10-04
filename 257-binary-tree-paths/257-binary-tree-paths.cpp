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
        if(!root->left and !root->right){
            res.push_back(str);
            return;
        }
        if(root->left) solve(root->left,str + "->" + to_string(root->left->val),res);
        if(root->right) solve(root->right,str+"->"+to_string(root->right->val),res);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        solve(root,to_string(root->val),res);
        return res;
    }
};