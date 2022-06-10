class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=0;
        set<int> se;
        int start=0;
        for(int i=0; i<s.length();i++){
            while(se.find(s[i])!=se.end()){
                se.erase(s[start]);
                start++;
            }
            se.insert(s[i]);
            if(count < se.size())
                count=se.size();
        }
        return count;
    }
};