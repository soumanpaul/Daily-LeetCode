// Recursion

class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        if (head == NULL)
            return NULL;
        head->next = removeElements(head->next, val);
        return (head->val == val) ? head->next : head;
    }
};

// Iterative

class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *sentinel = new ListNode(0);
        sentinel->next = head;

        ListNode *prev = sentinel, *curr = head, *toDelete = nullptr;
        while (curr != nullptr) {
            if (curr->val == val) {
                prev->next = curr->next;
                toDelete = curr;
            } else
                prev = curr;

            curr = curr->next;

            if (toDelete != nullptr) {
                delete toDelete;
                toDelete = nullptr;
            }
        }

        ListNode *ret = sentinel->next;
        delete sentinel;
        return ret;
    }
};
