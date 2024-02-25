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
    ListNode* reverseLinkedList(ListNode* head) {
    // Check if the list is empty
    // or has only one node
    if (head == NULL || head->next == NULL) {
        
        // No change is needed;
        // return the current head
        return head; 
    }

    // Recursive step: Reverse the remaining 
    // part of the list and get the new head
    ListNode* newHead = reverseLinkedList(head->next);

    // Store the next node in 'front'
    // to reverse the link
    ListNode* front = head->next;

    // Update the 'next' pointer of 'front' to
    // point to the current head, effectively
    // reversing the link direction
    front->next = head;

    // Set the 'next' pointer of the
    // current head to 'null' to
    // break the original link
    head->next = NULL;

    // Return the new head obtained
    // from the recursion
    return newHead;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL and fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp1=reverseLinkedList(slow);
        slow=head;
        while(temp1!=NULL){
            if(temp1->val!=slow->val) return false;
            temp1=temp1->next;
            slow=slow->next;
        }
        return true;
        
    }
};