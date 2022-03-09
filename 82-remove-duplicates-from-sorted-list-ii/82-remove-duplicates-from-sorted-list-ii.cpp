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
    int val;
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head ==NULL || head->next==NULL) return head;
        
        ListNode* current=head,*newhead=new ListNode() ,*prev;
        newhead->next=head;
        prev=newhead;
        
        while(current!=NULL){    
            while(current->next !=NULL && prev->next->val == current->next->val){
                current=current->next;
            }
            if(prev->next!=current)
                prev->next=current->next;
            else prev=prev->next;
            
            current=current->next;
        }      
        head=newhead->next;
    return head;
    }
};