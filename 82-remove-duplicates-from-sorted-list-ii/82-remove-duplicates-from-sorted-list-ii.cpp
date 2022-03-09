class Solution {
    int val;
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head ==NULL || head->next==NULL) return head;
        
        ListNode* current=head,*prev=NULL;
        while(current !=NULL && current->next !=NULL){
            
            if(current->val == current->next->val){
                while(current->next !=NULL && current->val == current->next->val){
                    current = current->next;
                }
                if(prev !=NULL){
                    prev->next = current->next;
                    current = current->next;
                }else {
                     head = current->next;
                    current = current->next;
                }
            }else {
                prev = current;
                current = current->next;
            }
        }
    return head;
    }
};