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
        vector<int> vec;
public:
    void newFun(TreeNode* root){
         if(root!=NULL){
            increasingBST(root->left);
            vec.push_back(root->val);
            increasingBST(root->right);
        }
        return ;
    }
    TreeNode* increasingBST(TreeNode* root) {
        newFun(root);
        TreeNode* ans = new TreeNode(0);    
        TreeNode* ptr = ans;
       
        for(int i : vec){
            TreeNode* tmp = new TreeNode(i);
            ans->right = tmp;
            ans=ans->right;
        }
        return ptr->right;
    }
};