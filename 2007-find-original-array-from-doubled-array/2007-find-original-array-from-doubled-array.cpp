class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        int len = changed.size();
        vector<int> ans;
        if(len%2 == 1) return {};
         sort(changed.begin(), changed.end());
        unordered_map<int, int> mp;
        
        for(int i=0; i<len;i++){
            mp[changed[i]]++;    
        }
        
       for (int i = 0; i < len; i++) {
          if (mp[changed[i]] == 0) continue;
          if (mp[changed[i] * 2] == 0) return {};
          ans.push_back(changed[i]);
          mp[changed[i]]--;
          mp[changed[i] * 2]--;
        }
       
       
        
        return ans;
    }
};