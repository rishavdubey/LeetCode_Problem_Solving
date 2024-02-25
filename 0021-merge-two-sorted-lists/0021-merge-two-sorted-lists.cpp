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
        void merge(ListNode* list1,ListNode* list2,ListNode* head){
        if(list1==NULL and list2==NULL)
            return;
        if(list1==NULL and list2!=NULL){
            head->next=list2;
            return;
        }
        if(list1!=NULL and list2==NULL){
            head->next=list1;
            return ;
        }
        
        if(list1->val>list2->val){
            ListNode* temp=new ListNode(list2->val);
            head->next=temp;
            merge(list1,list2->next,head->next);
        }else{
            ListNode* temp=new ListNode(list1->val);
            head->next=temp;
            merge(list1->next,list2,head->next);
        }
        
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head= new ListNode(-1);
        merge(list1,list2,head);
        return head->next;
        
    }
};