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
    void solve(TreeNode* &root,string temp,string &res){
        if(root==NULL) return ;
        if(root->left==NULL and root->right==NULL){
            temp+=('a'+root->val);
            reverse(temp.begin(),temp.end());
            if(temp<res){
                res=temp;
            }
            return;
        }
        temp+=('a'+root->val);
        solve(root->left,temp,res);
        solve(root->right,temp,res);
    }
    string smallestFromLeaf(TreeNode* root) {
        string res="zzzzzzzzzzzzzzzzzzzzzz";
        solve(root,"",res);
        return res;
    }
};