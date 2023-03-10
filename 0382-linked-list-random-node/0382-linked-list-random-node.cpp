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
    ListNode* HeadNode;
    Solution(ListNode* head) {
        HeadNode=head;
    }
    
    int getRandom() {
        int len=1;
        int res=HeadNode->val;
        ListNode* temp= HeadNode;
        while(temp!=NULL){
            if(rand()%len==0){
                res= temp->val;
            }
            temp=temp->next;
            len++;
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */