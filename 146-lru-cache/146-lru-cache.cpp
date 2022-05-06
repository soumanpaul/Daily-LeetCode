class Node {
public:
    int key;
    int value;
    Node *pre;
    Node *next;

    Node(int k, int v) {
        key = k;
        value = v;
        pre = NULL;
        next = NULL;
    }
};

class LRUCache {
public:
    unordered_map<int, Node *> map;
    int capacity, count;
    Node *head, *tail;

    LRUCache(int c) {
        capacity = c;
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        head->pre = head;
        tail->next = head;
        tail->pre = NULL;
        count = 0;
    }

    void deleteNode(Node *node) {
        node->pre->next = node->next;
        node->next->pre = node->pre;
    }
    void addToHead(Node *node) {
        node->next = head->next;
        node->next->pre = node;
        node->pre = head;
        head->next = node;
    }
    int get(int key) {
        if (map[key] != NULL) {
            Node* node = map[key];
            int result = node->value;
            deleteNode(node);
            addToHead(node);
            return result;
        }
        return -1;
    }
    void put(int key, int value) {
        if(map[key] !=NULL){
            Node *node = map[key];
            node->value = value;
            deleteNode(node);
            addToHead(node);
        }else {
            Node *node = new Node(key, value);
            map[key] = node;
            if(count < capacity){
                count++;
                addToHead(node);
            }else {
                map.erase(tail->pre->key);
                deleteNode(tail->pre);
                addToHead(node);
            }
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */