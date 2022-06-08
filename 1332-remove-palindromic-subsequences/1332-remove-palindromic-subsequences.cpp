class Solution {
public:
    int removePalindromeSub(string s) {
        int pt=s.length()-1;
        for(int i=0; i< s.length();i++){
            if(s[i]!=s[pt]){
                return 2;
            }
            pt--;
        }
        return 1;
    }
};