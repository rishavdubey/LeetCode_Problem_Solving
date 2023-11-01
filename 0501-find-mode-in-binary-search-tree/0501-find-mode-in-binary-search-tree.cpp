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
    void findM(TreeNode* root, unordered_map<int,int>&Ump,int &mx){
        if(root==NULL)
            return;
        Ump[root->val]++;
        mx=max(Ump[root->val],mx);
        findM(root->left,Ump,mx);
        findM(root->right,Ump,mx);
    }
    
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int> Ump;
        int mx=INT_MIN;
        findM(root,Ump,mx);
        vector<int>v;
        
        for(auto it:Ump){
            if(it.second==mx)
                v.push_back(it.first);
        }
        
        
        return v;      
        
        
    }
};