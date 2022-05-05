/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    unordered_set<int> set;
public:
    bool inorder(TreeNode* root,int k){
        if(root==NULL) return false;
        if(set.find( k-root->val)!=set.end())
            return true;
        set.insert(root->val);    
        return inorder(root->left,k) || inorder(root->right,k);;  
    }
    bool findTarget(TreeNode* root, int k) {
        return inorder(root,k);
    }
};