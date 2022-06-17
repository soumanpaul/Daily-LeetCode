class Solution {
public:
    int ans=0;
    map<TreeNode*,int> covered;
        
    int minCameraCover(TreeNode* root) {
        covered[NULL]++;
        dfs(root, NULL);
        return ans;
    }
    
    void dfs(TreeNode *node, TreeNode *par){
        if(node !=NULL){
            dfs(node->left, node);
            dfs(node->right, node);
            
            if(par== NULL && !covered[node] || !covered[node->right] || !covered[node->left] ){
                ans++;
                covered[node]++;
                covered[par]++;
                covered[node->left]++;
                covered[node->right]++;
            }
        }
    }
    
};