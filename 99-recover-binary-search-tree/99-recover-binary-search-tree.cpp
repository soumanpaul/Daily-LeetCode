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
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        vec.push_back(root->val);
        inorder(root->right);
    }
    void inorder1(TreeNode* root){
        if(root==NULL) return;
        inorder1(root->left);
        root->val=vec[0];
        auto it = vec.begin();
        vec.erase(it);
        inorder1(root->right);
    }

    void recoverTree(TreeNode* root) {
       
        inorder(root);
        sort(vec.begin(), vec.end());
        inorder1(root);
        

    }
};