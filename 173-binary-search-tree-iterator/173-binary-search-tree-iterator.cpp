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
class BSTIterator {
    TreeNode* head, *ptr;
public:
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        ptr->right = root;
        ptr=ptr->right;
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        head = new TreeNode(0);
        ptr=head;
        inorder(root);
    }
    
    int next() {
        head=head->right;
        return head->val;
    }
    
    bool hasNext() {
        return head->right !=NULL;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */