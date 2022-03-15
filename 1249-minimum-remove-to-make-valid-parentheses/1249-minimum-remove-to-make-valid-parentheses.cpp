class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stack;
        int length = s.length();
        int i=0;
        string str;
        while(length--){
            
            if(s[i]=='(' || s[i]==')'){
                
                if(!stack.empty()){
                    if(s[i]=='(') stack.push(i);
                    else if(s[i]==')')
                        stack.pop();
                    i++;
                } 
                else {
                    if(s[i]==')'){
                        s.erase(i,1);
                    }
                    else{
                        stack.push(i);
                        i++;
                    }
                }
            }else i++;
        }
        while(!stack.empty()){
            cout << stack.top() << " " << stack.size()<<endl;
            s.erase(stack.top(),1);
            stack.pop();
        }
        
        return s;
    }
};