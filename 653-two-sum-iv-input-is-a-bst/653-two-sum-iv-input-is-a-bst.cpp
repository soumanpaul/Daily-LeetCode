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
    bool flag=false;
public:
    bool inorder(TreeNode* root,int k){
        if(root==NULL) return false;
        inorder(root->left,k);
        int item = k-root->val;
        if(set.find(item)!=set.end()){
            flag=true;
            return flag;
        }
        else set.insert(root->val);    
        inorder(root->right,k);
      return flag;  
    }
    bool findTarget(TreeNode* root, int k) {
        return inorder(root,k);
    }
};