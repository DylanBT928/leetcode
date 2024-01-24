/*
(226) Invert Binary Tree
https://leetcode.com/problems/invert-binary-tree/
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void swapChild(TreeNode* parent) {
        if (parent) {
            swapChild(parent->left);
            swapChild(parent->right);
            swap(parent->left, parent->right);
        }
    }

    TreeNode* invertTree(TreeNode* root) {
        swapChild(root);
        return root;
    }
};
