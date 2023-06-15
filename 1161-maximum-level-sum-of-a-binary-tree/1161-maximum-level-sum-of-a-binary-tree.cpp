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
    int maxLevelSum(TreeNode* root) {
        int maxi=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        int level=0;
        
        while(!q.empty()){
            level++;
            int size=q.size();
            int res=0;
            for(int i=0;i<size;i++){
                auto it=q.front();
                q.pop();
                res+=it->val;
                if(it->left)
                    q.push(it->left);
                if(it->right)
                    q.push(it->right);
                
            }
            if(maxi<res){
                maxi=res;
                ans=level;
            }
        }
        return ans;
        
    }
};