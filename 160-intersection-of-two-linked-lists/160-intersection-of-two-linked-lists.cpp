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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> nodeAddress;
        ListNode* la=headA, *lb=headB;
        
        while(lb!=NULL){
            nodeAddress.insert(lb);
            lb=lb->next;
        }
        while(la!=NULL){
            if(nodeAddress.find(la)!=nodeAddress.end()){
                return la;
            }
            nodeAddress.insert(la);
            la=la->next;
        }
        return NULL;
    }
};