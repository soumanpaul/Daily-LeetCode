class Solution {
public:
   
    int lengthOfLongestSubstring(string s) {

        map<int, int> map;
        int count = 0, n = s.length();
        int left = 0, right = 0;

        while (right < n) {
            if (map[s[right]]) {
                left = max(map[s[right]], left);
            }
            count = max(count, right - left + 1);
            map[s[right]] = right + 1;
            right++;
        }
        return count;
    }
};