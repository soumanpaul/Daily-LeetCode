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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head;
        ListNode *solw = head;
        while(n--) fast=fast->next;
        if(!fast) return head->next;
        while(fast->next!= NULL){
            solw = solw->next;
            fast = fast->next;
        }
        solw->next = solw->next->next;
        return head;
    }
};