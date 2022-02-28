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
public:
    bool isValidBST(TreeNode* root) {
        
        return ValidBST(root, nullptr, nullptr);
    }
    bool ValidBST(TreeNode* root, TreeNode* low, TreeNode* high){
        if(root==NULL) return true;
        if(( low != nullptr && root->val <= low->val) || (high != nullptr && root->val >= high->val))
            return false;
        return ValidBST(root->left, low, root) && ValidBST(root->right,root, high);
    }

};