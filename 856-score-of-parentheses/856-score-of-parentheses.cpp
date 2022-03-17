class Solution {
public:
    int scoreOfParentheses(string s) {
        int result=0, balance=0, i=0;
        int length = s.length();
        while(length--){
            if(s[i] == '('){
                balance++;
            }
            else {
                balance--;
                if(s[i-1] == '(')
                    result+=1 << balance;
            }
            i++;
        }
        return result;
    }
};