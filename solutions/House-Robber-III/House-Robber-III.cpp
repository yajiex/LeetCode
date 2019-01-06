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
    
    /*
    f1(node) be the value of maximum money we can rob from the subtree with node as root ( we can rob node if necessary).

f2(node) be the value of maximum money we can rob from the subtree with node as root but without robbing node.

Then we have

f2(node) = f1(node.left) + f1(node.right) and

f1(node) = max( f2(node.left)+f2(node.right)+node.value, f2(node) ).
*/
    int rob(TreeNode* root) {
        return robHelper(root).second;
    }
    
    pair<int, int> robHelper(TreeNode* root)
    {
        if(!root)
        {
            return make_pair(0, 0);
        }
        
        auto l = robHelper(root->left);
        auto r = robHelper(root->right);
        auto noRoot = l.second + r.second;
        return make_pair(noRoot, max(noRoot, root->val + l.first + r.first));
    }
};