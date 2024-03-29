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
class compare {
public:
    bool operator()(ListNode* a, ListNode* b){
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue <ListNode*, vector<ListNode*>, compare > pq;

        int k=lists.size();
        for(int i=0;i<k;i++){
            if(lists[i]!=NULL)
                pq.push(lists[i]);
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* root=dummy;
        while(!pq.empty()){
            ListNode* node=pq.top();
            pq.pop();
            dummy->next=node;
            dummy=dummy->next;
            node=node->next;
            if(node!=NULL){
                pq.push(node);
            }
        }
        return root->next;
    }
};