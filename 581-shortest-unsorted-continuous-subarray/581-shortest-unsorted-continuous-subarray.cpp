class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int>stack,st1;
        int left=nums.size(), right=0;
        for(int i=0;i<nums.size();i++){
           while(!stack.empty() && nums[stack.top()] > nums[i]){
               left=min(left,stack.top());
               stack.pop();
           }
           stack.push(i);    
        }
        // stack.();
        for(int i=nums.size()-1; i >=0; i--){
            while(!st1.empty() && nums[st1.top()] < nums[i]){
               right=max(right,st1.top());
               st1.pop();
           }
           st1.push(i);    
        }
        
        // cout << left<<" "<<right<<" "<<count<<endl;
        return right-left > 0 ? right-left+1 : 0;
    }
};