class Solution {
public:
    map<Node *, Node *> mp;

    Node *copyRandomList(Node *head) {

        if (head == NULL)
            return NULL;
        Node *current = new Node(head->val);
        Node *newHead = current;
        Node *oldHead = head;

        mp[head] = current;
        while (head != NULL) {
            Node *newNext = NULL;
            if (head->next != NULL) {
                newNext = new Node(head->next->val);
                mp[head->next] = newNext;
            }

            current->next = newNext;
            current = current->next;
            head = head->next;
        }

        Node *newNewHead = newHead;

        while (oldHead != NULL) {
            newHead->random = oldHead->random == NULL ? NULL : mp[oldHead->random];
            oldHead = oldHead->next;
            newHead = newHead->next;
        }

        return newNewHead;
    }
};
