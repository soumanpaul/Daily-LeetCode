/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL) return NULL;        
        Node *next, *temp, *newPt;
        for(temp=head; temp!=NULL;){
            next=temp->next;
            temp->next=new Node(temp->val);
            temp->next->next=next;
            temp=next;
        }
        for(Node *curr=head; curr!=NULL; curr=curr->next->next){
            curr->next->random= curr->random!=NULL ? curr->random->next : NULL;  
        }
        Node *original=head, *copy = head->next;
        newPt=copy;
        
        while(original && copy){
            original->next = original->next ? original->next->next : original->next;
            copy->next = copy->next ? copy->next->next : copy->next;
            original=original->next;
            copy=copy->next;
        }
        return newPt;
    }
};
















