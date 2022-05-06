class Solution {
public:
    string removeDuplicates(string s) {
      stack<char>stk;
        int len = s.length();
        for(int i=0;i<len;i++){
            if(!stk.empty()){
                if(stk.top()==s[i])
                    stk.pop();
                else stk.push(s[i]);
            }  else stk.push(s[i]);
        }
        string str;
        while(!stk.empty()){
            str+=stk.top();
            stk.pop();
        }
        string ps =  string(str.rbegin(),str.rend());
        return ps;
    }
};