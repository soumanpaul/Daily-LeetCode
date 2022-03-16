class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        int length = pushed.size();
        stack<int>stack;
        int j=0;
        
        for(int x: pushed){
            stack.push(x);
            while(!stack.empty() && stack.top() == popped[j]){
                stack.pop();
                j++;
            }
        }
        return j == length;
    }
};