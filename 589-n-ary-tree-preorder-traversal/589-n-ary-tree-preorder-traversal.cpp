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
    vector<int> preorder(Node* root) {
         vector<int> result;
        if(root == NULL)
            return result;
        stack<Node*> stack;
        stack.push(root);
        while(!stack.empty()){
            Node* tmp = stack.top();
            stack.pop();
            result.push_back(tmp->val);
            for(int i=tmp->children.size()-1; i >=0; i--){
                stack.push(tmp->children[i]);
            }
        }
        return result;
        
    }
};