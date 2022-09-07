class Solution {
public:
    
    string tree2str(TreeNode* root) {
        
        string str = treeInString(root);
        
        return str;
    }
    
    string treeInString(TreeNode * root){
        
        if(!root) return "";
        
        string s = to_string(root->val);
        
        string s1 =  treeInString(root->left);
        string s2 =  treeInString(root->right);
        
        if(s2 !="" || s1!="")
            s +=  "(" + s1  + ")";
        else s += s1;
        
        if(s2 != "")
            s +=  "(" + s2 + ")";
        else
            s +=  s2;
        
        return s;
    }
};
