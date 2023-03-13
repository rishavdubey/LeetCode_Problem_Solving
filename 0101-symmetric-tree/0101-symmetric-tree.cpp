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
    bool symmetry(TreeNode* L,TreeNode* R){
        if(L==NULL or R==NULL)
            return L==R;
        if(L->val!=R->val)
            return false;
        return symmetry(L->left,R->right) and symmetry(L->right,R->left) ;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return symmetry(root->left,root->right);
        
        
    }
};