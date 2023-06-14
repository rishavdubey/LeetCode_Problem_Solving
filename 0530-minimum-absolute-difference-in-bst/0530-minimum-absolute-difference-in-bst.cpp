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
    int prev=1e6;
    int mini=INT_MAX;
    
    void getDiff(TreeNode* root){
        if(root==NULL) return;
        getDiff(root->left);
        mini=min(mini,abs(prev-root->val));
        prev=root->val;
        getDiff(root->right);
        
    }
    
    int getMinimumDifference(TreeNode* root) {
        getDiff(root);
        return mini;
        
    }
};