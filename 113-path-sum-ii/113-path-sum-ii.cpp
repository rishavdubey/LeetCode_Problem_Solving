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
    void solve(TreeNode* root,int targetSum,vector<int>temp,vector<vector<int>>&res){
        if(root==NULL) return;
        temp.push_back(root->val);
        if(root->left==NULL and root->right==NULL and targetSum- root->val==0) res.push_back(temp);
        solve(root->left,targetSum -root->val,temp,res);
        solve(root->right,targetSum - root->val,temp,res);
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        if(root==NULL) return res;
        vector<int>temp;;
        solve(root,targetSum,temp,res);
        return res;
    }
};