
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL or head->next==NULL) return head;
        
        ListNode* firstNode = head;        
        ListNode* secondNode = head->next;
        
        firstNode->next=swapPairs(secondNode->next);
        secondNode->next=firstNode;
                
        return secondNode;
    }
};