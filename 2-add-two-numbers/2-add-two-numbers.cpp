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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int remender=0;
        ListNode* head=NULL, *tail=new ListNode();
        head=tail;
        
        int temp = l1->val+l2->val;
        int val = temp+remender;
        tail->val = val%10;
        remender = val/10;
        l1=l1->next;
        l2=l2->next; 
        while(l1!=NULL && l2!=NULL){
            int temp = l1->val+l2->val;
            int val = temp+remender;
            ListNode* ptr = new ListNode(val%10);
            tail->next =ptr;
            tail=ptr;
            remender = val/10;
            l1=l1->next;
            l2=l2->next; 
        }
        
        while(l2!=NULL){
            int value = l2->val+remender; 
            cout << 10%10<<" ";
            ListNode* temp= new ListNode(value%10);
            tail->next=temp;
             tail=temp;
            l2=l2->next;
            remender = value/10;
        }
         while(l1!=NULL){
            int value = l1->val+remender; 
            ListNode* temp= new ListNode(value%10);
            tail->next=temp;
            tail=temp;
            l1=l1->next;
             remender = value/10;
        }
        if(remender){
            ListNode* temp= new ListNode(remender);
            tail->next=temp;
        }
    return  head;
    }
    
};