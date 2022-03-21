class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> result;
        unordered_map<char, int> mp;
        int n = s.size(), begin = 0, end = 0;
        
        for(int i=0; i<n; ++i)
            mp[s[i]] = i;
        
        for(int i=0; i<n; ++i){
            end = max(end, mp[s[i]]);
            if(end == i){
                result.push_back(end-begin+1);
                begin = i+1;
            }
        }
        return result;
    }
};