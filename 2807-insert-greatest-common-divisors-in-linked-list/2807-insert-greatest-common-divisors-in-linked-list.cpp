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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* root= head;
        ListNode* prev=root;
        int x=root->val;
        int y=0;
        root=root->next;
        while(root!=NULL){
            int y=root->val;
            int gcd= getGCD(x,y);
            x=y;
            ListNode* tempNode= new ListNode(gcd);
            tempNode->next=root;
            prev->next=tempNode;
            prev=root;
            root=root->next;
        }
        return head;
        
    }
    int getGCD(int x, int y){
        if(x==y) return x;
        if(x>y){ 
            return getGCD(x-y,y);
        }else{
            return getGCD(x,y-x);
        }
    }
};