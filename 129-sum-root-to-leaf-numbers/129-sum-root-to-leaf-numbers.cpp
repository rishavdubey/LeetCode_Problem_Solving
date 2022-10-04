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
    int sumNumbers(TreeNode* root,int sum=0) {
        if(root==NULL) return 0;
        if(root->left==NULL and root->right==NULL) return sum*10 + root->val;
        sum=sum*10 + root->val;
        int left=sumNumbers(root->left,sum);
        int right=sumNumbers(root->right,sum);
        return left+right;
    }
};