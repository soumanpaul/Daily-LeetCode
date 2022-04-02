class Solution {
public:
    bool isPalindrome(string s, int i){
        string st =s;
        st.erase(i,1);
        int first =0, second = st.length()-1;
        while(first < second){
            if(st[first] != st[second]){
                return false;}
            first++;
            second--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        bool isPel = true;
        int count = 0;
        int first =0, second = s.length()-1;
        
        while(first < second){
            if(s[first] != s[second]){
                 if(isPalindrome(s,first)){
                   return true; }
                 else if(isPalindrome(s,second)){
                    return true; }
                 else {
                   return false; } 
            }
            first++;
            second--;
        }
        return isPel;
    }
};