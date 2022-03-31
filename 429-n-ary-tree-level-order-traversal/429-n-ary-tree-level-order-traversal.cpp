class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<Node*>queue;
        queue.push(root);
        while(!queue.empty()){
            vector<int>currentLayer;
            int size = queue.size();
            for(int i=0; i< size; i++){
                Node* node = queue.front();
                queue.pop();
                currentLayer.push_back(node->val);
                for(auto x : node->children)
                    queue.push(x);
            }
            result.push_back(currentLayer);
        }
        return result;
    }
};