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
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* dumm = new ListNode(-1);
        dumm->next=head;
        ListNode* prev = dumm;
        
        while(head!= NULL && head->next!=NULL){
            
            ListNode* firstNode = head;
            ListNode* secondNode = head->next;
            
            prev->next=secondNode;
            firstNode->next=secondNode->next;
            secondNode->next=firstNode;
            
            prev=firstNode;
            head=firstNode->next;
            
        }
        
      return  dumm->next;
    }
};