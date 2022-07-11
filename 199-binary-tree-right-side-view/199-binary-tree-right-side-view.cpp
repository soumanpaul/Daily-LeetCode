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
    vector<int> ans;
    int maxheight= INT_MIN;
public:
    
    void getView(TreeNode* root, int size){
        if(root==NULL) return;
       
         if(maxheight <  size) {
            ans.push_back(root->val);
            maxheight=size;
         }
        
        getView(root->right, size+1);
        getView(root->left, size+1);
       
        return; 
    }
    
    vector<int> rightSideView(TreeNode* root) {
        getView(root,0);
        return ans;
    }
};