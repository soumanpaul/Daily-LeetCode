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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> nodes;
        if (root != NULL) {
            preOrder(root, nodes);
        }
        return nodes;
    }
    void preOrder(TreeNode *root, vector<int> &nodes) {
        if (root == NULL)
            return;
        nodes.push_back(root->val);
        preOrder(root->left, nodes);
        preOrder(root->right, nodes);
    }
};