class FreqStack {
public:
    int i = 0;
    priority_queue<pair<pair<int, int>, int>> pq;
    unordered_map<int, int> map;
    void push(int val) {
        i++;
        map[val]++;
        pq.push({{map[val], i}, val});
    }

    int pop() {
        int x = pq.top().second;
        pq.pop();
        map[x]--;
        return x;
    }
    FreqStack() {
    }
};
