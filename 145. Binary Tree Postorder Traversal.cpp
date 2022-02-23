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
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> nodes;
        if (root != NULL) {
            postorder(root, nodes);
        }
        return nodes;
    }
    void postorder(TreeNode *root, vector<int> &nodes) {
        if (root == NULL)
            return;
        postorder(root->left, nodes);
        postorder(root->right, nodes);
        nodes.push_back(root->val);
    }
};