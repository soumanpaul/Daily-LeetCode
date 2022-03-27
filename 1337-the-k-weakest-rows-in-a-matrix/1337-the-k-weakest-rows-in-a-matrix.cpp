class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k) {
        vector<pair<int, int>> vec;
        vector<int> results;
        for (int i = 0; i < mat.size(); ++i) {
            int tmp = count(mat[i].begin(), mat[i].end(), 1);
            vec.push_back({tmp, i});
        }
        sort(vec.begin(), vec.end());
        for (int i = 0; i < k; ++i) {
            results.push_back(vec[i].second);
        }
        return results;
    }
};