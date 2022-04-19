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
    TreeNode* first=new TreeNode(), *second=new TreeNode(), *last=new TreeNode(), *prev=new TreeNode(), *curr=NULL;
    
    int count =0;
    
public:
    void swap(TreeNode* a, TreeNode* b){
       int tmp=a->val;
        a->val=b->val;
        b->val = tmp;   
    }
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        if(root->val < prev->val){
            second=root;
            if(first->val==0){
                first = prev;
            }else return;
        }    
        prev = root;
        inorder(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(first,second);
    }
};