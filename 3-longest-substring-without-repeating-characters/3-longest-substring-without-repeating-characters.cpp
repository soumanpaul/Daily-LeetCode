class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int count=0, n = s.length(), left=0, right=0;
        map<int,int> map;
        int i=0;
        
        for(int i=0, j=0; i<n;i++){
            if(map[s[i]]){
                j = max(map[s[i]],j);
            }
            count = max(count, i-j+1);
            map[s[i]]= i+1;
        }
        
        return count;
    }
};