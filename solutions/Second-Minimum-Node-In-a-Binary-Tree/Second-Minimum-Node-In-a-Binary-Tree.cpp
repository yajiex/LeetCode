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
    int findSecondMinimumValue(TreeNode* root) {
        if (!root) {
            return -1;
        }
        if (!root->left && !root->right) {
            return -1;
        }
        auto l = root->left->val;
        if (root->left->val == root->val) {
            l = findSecondMinimumValue(root->left);
        }
        auto r = root->right->val;
        if (root->right->val == root->val) {
            r = findSecondMinimumValue(root->right);
        }
        if (l != -1 && r != -1) {
            return min(l, r);
        } else if (l != -1) {
            return l;
        } else {
            return r;
        }
    }
};