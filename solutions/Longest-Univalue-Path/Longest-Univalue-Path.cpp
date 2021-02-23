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
    int longestUnivaluePath(TreeNode* root) {
        dfs(root);
        return ans;
    }
    
private:
    int ans = 0;
    int dfs(TreeNode* root) {
        if (!root) {
            return 0;
        }
        auto l = dfs(root->left);
        auto r = dfs(root->right);
        auto ansL = root->left && (root->left->val == root->val) ? l + 1 : 0;
        auto ansR = root->right && (root->right->val == root->val) ? r + 1 : 0;
        ans = max(ans, ansL + ansR);
        return max(ansL, ansR);
    }
};