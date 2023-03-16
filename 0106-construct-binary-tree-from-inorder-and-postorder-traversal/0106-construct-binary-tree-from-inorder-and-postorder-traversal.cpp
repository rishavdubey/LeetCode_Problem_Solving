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
    TreeNode* construct_tree(vector<int>& postorder,
                         unordered_map<int,int>& inorderMap,
                         int& preIndex, int inStart, int inEnd)
{
    if (inStart > inEnd)
        return NULL;

    // Pick current node from preorder traversal using preIndex
    TreeNode* node = new TreeNode(postorder[preIndex]);
    --preIndex;

    if (inStart == inEnd)
        return node;

    // Else get the index of this node in Inorder traversal
    int inIndex = inorderMap[node->val];
    
    // Using index in inorder traversal, construct left and right subtrees
    
    node->right = construct_tree(postorder, inorderMap, preIndex, inIndex + 1, inEnd);
    node->left = construct_tree(postorder, inorderMap, preIndex, inStart, inIndex - 1);

    return node;
}
    
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int> INmp;
        for(int i=0;i<inorder.size();i++){
            INmp[inorder[i]]=i;
        }
        int postidx=postorder.size()-1;
        
        TreeNode* root = construct_tree(postorder,INmp,postidx,0,inorder.size()-1);
        return root;
        
        
    }
};