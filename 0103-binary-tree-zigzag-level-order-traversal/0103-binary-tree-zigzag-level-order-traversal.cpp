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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        int res=0;
        while(!q.empty()){
            res++;
            int n=q.size();
            vector<int>v;
            for(int i=0;i<n;i++){
                auto temp=q.front();
                q.pop();
                v.push_back(temp->val);
                
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);

            }
            if(res%2==0)
                reverse(v.begin(),v.end());
            ans.push_back(v);
        }
        // cout<<res;
        return ans;
        
        
    }
};