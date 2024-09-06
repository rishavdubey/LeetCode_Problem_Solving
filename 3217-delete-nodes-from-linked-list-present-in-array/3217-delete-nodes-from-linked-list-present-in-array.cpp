/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>mp;
        for(auto &it:nums) mp[it]++;
        
        ListNode* root=head;
        ListNode* ans=root;
        ListNode* prev=NULL;
        while(root!=NULL && root->next!=NULL){
            int val=root->val;
            if(mp[val]){
                int tempVal=root->next->val;
                root->val=tempVal;
                root->next=root->next->next;

            }else{
                prev=root;
                root=root->next;
            
            }
        }
        int val=root->val;
        
        if(mp[val]){
            prev->next=NULL;
        
        }
        
        
        return ans;                
                  
        
    }
};