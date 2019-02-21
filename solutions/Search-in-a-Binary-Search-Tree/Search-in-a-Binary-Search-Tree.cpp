/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
  public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        while (root != nullptr && root->val != val)
        {
            root = (root->val > val) ? root->left : root->right;
        }
        return root;
    }
};