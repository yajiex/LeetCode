/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int nodes = 1;
        depth(root, nodes);
        return nodes - 1;
    }

private:
    int depth(TreeNode* t, int &nodes)
    {
        if(t == NULL)
        {
            return 0;
        }
        int l = depth(t->left, nodes);
        int r = depth(t->right, nodes);
        nodes = max(nodes, l + r + 1);
        return max(l, r) + 1;
    }
};