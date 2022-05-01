class Solution {
public:
    string process(string s){
        
        // go through each char of string and  if it # char remove last char from stack, else insert new char to stack
        
        stack<char>s1;
         for(char ch : s){
            if(ch!='#')
                s1.push(ch);
            else if(!s1.empty())
                s1.pop();
        }
        
        // store stack content to new_string variable         
        string new_string;
        while(!s1.empty()){
            new_string+=s1.top();
            s1.pop();
        }
        
        // return filtered string         
        return new_string;
    }
    
    bool backspaceCompare(string s, string t) {
        // use a common function process to remomve backspace char from string         
        return process(s)==process(t);
    }
};