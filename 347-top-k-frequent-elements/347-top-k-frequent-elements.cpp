class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (k == nums.size()) {
            return nums;
        }

        map<int, int> count;
        for (int n : nums) {
            count[n] += 1;
        }

        auto comp = [&count](int n1, int n2) { return count[n1] > count[n2]; };
        priority_queue<int, vector<int>, decltype(comp)> new_heap(comp);

        for (pair<int, int> p : count) {
            new_heap.push(p.first);
            if (new_heap.size() > k) new_heap.pop();
        }

        vector<int> top(k);
        for (int i = k - 1; i >= 0; i--) {
            top[i] = new_heap.top();
            new_heap.pop();
        }
        return top;
    }
};