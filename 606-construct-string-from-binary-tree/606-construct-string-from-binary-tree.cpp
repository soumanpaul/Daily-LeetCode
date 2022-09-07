class Solution {
public:
    
    string tree2str(TreeNode* root) {
        
        if(root== NULL) return "";
        
        if(root->left == NULL && root->right == NULL)
            return to_string(root->val);
        

        
        string s1 =  tree2str(root->left);
        string s2 =  tree2str(root->right);
        
        if(root->right == NULL)
            return to_string(root->val) + "(" + s1 + ")";
        return to_string(root->val) + "(" +s1 + ")(" + s2 + ")";
        
    }
    
    
};
