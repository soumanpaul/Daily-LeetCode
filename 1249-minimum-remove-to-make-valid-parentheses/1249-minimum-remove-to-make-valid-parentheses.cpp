class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<int> stack;
        set<int> index_to_remove;
        
        for(int i=0;i<s.length(); i++){

            if(s[i]=='(') stack.push(i);
            
            if(s[i]==')'){
                if(stack.empty()){
                    index_to_remove.insert(i);
                }
                else{
                    stack.pop();                            
                }
            }
        }
        
        while(!stack.empty()){
            index_to_remove.insert(stack.top());
            stack.pop();
        }
        
        string result_str;
        
        for(int i=0;i<s.length(); i++){
            if(index_to_remove.find(i)== index_to_remove.end())
                result_str += s[i];
        }
        
        return result_str;
    }
};