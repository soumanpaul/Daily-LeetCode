/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int getCount(ListNode *head){
        ListNode * temp = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* intersectionNode(int d , ListNode* la, ListNode *lb){
        ListNode *curr1 = la;
        ListNode *curr2 = lb;
        for(int i=0; i<d;i++){
            if(curr1==NULL)
                return NULL;
            curr1=curr1->next;
        }
        while(curr1!=NULL && curr2!=NULL){
            if(curr1==curr2)
                return curr1;
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return NULL;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *la =headA, *lb=headB;
        
        int l1=getCount(headA);
        int l2=getCount(headB);
        
        if(l1 > l2){
            int d = l1-l2;
            return intersectionNode(d, la, lb);
        }else{
            int d = l2-l1;
            return intersectionNode(d, lb, la);
        }
        // return NULL;
    }
};