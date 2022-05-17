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
    int minValue(TreeNode* root){
        if(root==NULL) return INT_MAX;
        int key = root->val;
        int lkey = minValue(root->left);
        int rkey = minValue(root->right);
        
        if(lkey <key) key = lkey;
        if(rkey < key) key = rkey;
        
        return key;
    }
    
    int maxValue(TreeNode* root){
        if(root==NULL) return INT_MIN;
        int key = root->val;
        int lkey = maxValue(root->left);
        int rkey = maxValue(root->right);
        
        if(lkey > key) key = lkey;
        if(rkey > key) key = rkey;
        
        return key;
        
    }
    
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;    
        if(root->left !=NULL  &&  maxValue(root->left) >= root->val)
            return false;
        if(root->right!= NULL && minValue(root->right) <= root->val)
            return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};