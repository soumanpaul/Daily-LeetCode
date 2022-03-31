/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        stack<Node*>stack;
        stack.push(root);
        while(!stack.empty()){
            Node* tmp = stack.top();
            ans.insert(ans.begin(),tmp->val);
            stack.pop();
            for(auto x : tmp->children){
                stack.push(x);
            }
        }
        
        return ans;
    }
};