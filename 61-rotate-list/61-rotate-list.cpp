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
    
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode *p1=head, *p2=head;
        ListNode *dummy = new ListNode();
        dummy->next=head;
        if(!k  || head==NULL || head->next==NULL)
            return head;
        
        while(k--){
            if(p2==NULL){
                p2=head;
                if(k>200000)
                k=k/10;
            }
            p2=p2->next;
        }
        if(p2==NULL)
            return head;
        
        while(p2 && p2->next!=NULL){
            p1=p1->next;
            p2=p2->next;
        }

        p2->next = head;
        head=p1->next;
        p1->next=NULL;

        return head;
    }
};