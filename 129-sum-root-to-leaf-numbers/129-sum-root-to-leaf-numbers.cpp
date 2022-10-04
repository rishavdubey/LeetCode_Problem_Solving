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
    void sumNum(TreeNode* &root,int sum,int &ans){
        if(root==NULL){
            return;
        }
        if(root->left==NULL and root->right==NULL){
            sum=sum*10 + root->val;
            ans+=sum;
            return;
        }
        sum=sum*10 + root->val;
        sumNum(root->left,sum,ans);
        sumNum(root->right,sum,ans);
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        sumNum(root,0,ans);
        return ans;
    }
};