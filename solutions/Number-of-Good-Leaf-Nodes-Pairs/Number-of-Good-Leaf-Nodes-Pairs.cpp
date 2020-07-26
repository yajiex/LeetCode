// https://leetcode.com/problems/number-of-good-leaf-nodes-pairs/discuss/755810/VIDEO-SOLUTION
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
class Solution
{
public:
    int ans = 0;
    vector<int> help(int d, TreeNode *root)
    {
        if (!root)
            return {0};
        if (root->left == NULL && root->right == NULL)
            return {1};
        auto l = help(d, root->left);
        auto r = help(d, root->right);
        for (auto a : l)
        {
            for (auto b : r)
            {
                if ((a && b) && a + b <= d)
                    ans++;
            }
        }
        vector<int> ret;
        for (auto a : l)
        {
            if (a && a + 1 < d)
                ret.push_back(a + 1);
        }
        for (auto b : r)
        {
            if (b && b + 1 < d)
                ret.push_back(b + 1);
        }
        return ret;
    }
    int countPairs(TreeNode *root, int d)
    {
        help(d, root);
        return ans;
    }
};