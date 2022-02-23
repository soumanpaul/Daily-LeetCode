// Recursive Solution
#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void inorder(TreeNode *root, vector<int> &result) {
        if (root != NULL) {
            inorder(root->left, result);
            result.push_back(root->val);
            inorder(root->right, result);
        }
    }
    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> result;
        inorder(root, result);
        return result;
    }
};

// Morris Traversal

/*

If current does not have left child

    a. push_back current’s value

    b. Go to the right, i.e., current = current.right

Else

    a. In current's left subtree, make current the right child of the rightmost node

    b. Go to this left child, i.e., current = current.left

*/
class Solution {

    vector<int> inorderTraversal(TreeNode *root) {
        vector<int> res;
        TreeNode *curr = root;
        TreeNode *pre;
        while (curr != NULL) {
            if (curr->left == NULL) {
                res.push_back(curr->val);
                curr = curr->right; // move to next right node
            } else {                // has a left subtree
                pre = curr->left;
                while (pre->right != NULL) { // find rightmost
                    pre = pre->right;
                }
                pre->right = curr;     // put cur after the pre node
                TreeNode *temp = curr; // store cur node
                curr = curr->left;     // move cur to the top of the new tree
                temp->left = NULL;     // original cur left be null, avoid infinite loops
            }
        }
        return res;
    }
};