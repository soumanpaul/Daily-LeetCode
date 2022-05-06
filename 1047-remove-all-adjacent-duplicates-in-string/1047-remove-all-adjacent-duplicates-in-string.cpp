class Solution {
public:
    string removeDuplicates(string s) {
      stack<char>stk;
        int len = s.length();
        for(auto ch : s){
            if(stk.empty()) stk.push(ch);
            else if(stk.top()==ch) stk.pop();
            else stk.push(ch);
        }
        string str;
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
        }
       reverse(str.begin(),str.end());
        return str;
    }
};