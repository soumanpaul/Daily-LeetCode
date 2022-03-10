
class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int carry = 0;
        ListNode *head = new ListNode();
        ListNode *tail = head;

        while (l1 != NULL || l2 != NULL) {

            int x = (l1 != NULL) ? l1->val : 0;
            int y = (l2 != NULL) ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;
            
            ListNode *newNode = new ListNode(sum % 10);

            tail->next = newNode;
            tail = tail->next;
            
            carry = sum / 10;

            if (l1 != NULL)
                l1 = l1->next;
            if (l2 != NULL)
                l2 = l2->next;
        }

        if (carry) {
            tail->next = new ListNode(carry);
        }
        return head->next;
    }
};