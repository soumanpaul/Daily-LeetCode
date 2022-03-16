class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int>stack;
        int j=0;
        
        for(int i=0;i<pushed.size(); ){
     
            if(!stack.empty() && popped[j]==stack.top()){
                    stack.pop();
                    j++;
            }
            else if(popped[j]==pushed[i]){
                j++;
                i++;
            }
            else {
                stack.push(pushed[i]);
                i++;
            } 
        }
        // cout << stack.empty() << "top "  << popped[j];
        
        while(j!=popped.size()){
            int item = stack.top();
            stack.pop();
            if(item!=popped[j]){
                return false;
            }
            j++;
        }
        return true;
    }
};