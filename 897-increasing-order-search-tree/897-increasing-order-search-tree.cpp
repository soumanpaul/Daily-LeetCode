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
    void inorder(TreeNode* root, vector<int>& vec){
         if(root!=NULL){
            inorder(root->left,vec);
            vec.push_back(root->val);
            inorder(root->right,vec);
        }
        return ;
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> vec;
        inorder(root,vec);
        
        TreeNode* ans = new TreeNode(0), * ptr = ans;
       
        for(int i : vec){
            TreeNode* tmp = new TreeNode(i);
            ans->right = tmp;
            ans=ans->right;
        }
        return ptr->right;
    }
};