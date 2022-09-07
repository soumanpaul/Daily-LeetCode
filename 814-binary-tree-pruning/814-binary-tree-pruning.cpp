
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        return isPrune(root) ? root : NULL;
    }
    
    bool isPrune(TreeNode *root){
        
        if(!root) return false;
        
        bool lr = isPrune(root->left);
        bool rr = isPrune(root->right);
        
        if(!lr) root->left = NULL;
        if(!rr) root->right = NULL;
        
        
        return root->val == 1 || lr || rr;
    }
};