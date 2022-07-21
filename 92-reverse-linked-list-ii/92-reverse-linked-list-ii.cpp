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
    
    ListNode* reverse(ListNode *head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr){
            ListNode* next = curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left=1, int right=1) {
        
        if(left==right) return head;
        
        ListNode *second = NULL, *second_prev=NULL;
        ListNode *first= NULL, *first_prev=NULL;
        
        int i=1;
        ListNode *curr=head;
        while(curr && i <= right){
            if(i<left)
                first_prev=curr;
            if(i==left)
                first=curr;
            
            if(i==right){
                second=curr;
                second_prev=curr->next;
            }
            curr=curr->next;
            i++;
        }
        second->next=NULL;
        
        second=reverse(first);
        
        if(first_prev)
            first_prev->next = second;
        else
            head=second;
        first->next = second_prev;
        return head;
    }
};