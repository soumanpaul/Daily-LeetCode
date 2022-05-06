class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>>stk;
        
        for(auto ch : s){
            if(stk.empty() || stk.top().first!=ch) {
                stk.push({ch,1});
            }
            else{ 
                auto prev=stk.top();
                stk.pop();
                stk.push({ch, prev.second+1});
            }
            if(stk.top().second==k) stk.pop();
        }
        
        string str;
        while(!stk.empty()){
            while(stk.top().second--){
                str+=stk.top().first;                
            }
            stk.pop();
        }
        reverse(str.begin(),str.end());
        
        return str;
    }
};