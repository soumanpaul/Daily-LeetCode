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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* fast = NULL;
        ListNode* slow = head;
        ListNode* temp= head;
        k=k-1;
        while(k--) temp = temp->next;
        fast = temp;
        while(temp->next!= NULL){
            temp = temp->next;
            slow = slow->next;
        }
        int value = fast->val;
        fast->val = slow->val;
        slow->val = value;
       return head;
    }
};