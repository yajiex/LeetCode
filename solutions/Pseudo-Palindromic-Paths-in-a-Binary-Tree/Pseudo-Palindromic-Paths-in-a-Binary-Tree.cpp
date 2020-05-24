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
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> vec = vector<int>(10, 0);
        int ans = 0;
        dfs(root, vec, ans);
        return ans;
    }

private:
    void dfs(TreeNode* root, vector<int> vec, int& ans) {
        if(!root) {
            return;
        }
        vec[root->val]++;
        if(!root->left && !root->right) {
            int flag = 0;
            for(int i=1;i<=9;i++) {
                if(vec[i] % 2 == 1) {
                    flag++;
                }
            }
            if (flag <= 1) {
                ans++;
            }
            return;
        }
        if(root->left) {
            dfs(root->left, vec, ans);
        }
        if(root->right) {
            dfs(root->right, vec, ans);
        }
    }
};