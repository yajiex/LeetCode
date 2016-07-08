
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isBalancedHelper(TreeNode *root, int &depth)
    {
        if(root==NULL)
        {
            depth=0;
            return true;
        }
        int left,right;
        if(isBalancedHelper(root->left, left) && isBalancedHelper(root->right, right))
        {
            int diff=abs(left-right);
            if(diff<=1)
            {
                depth=1+(left>right?left:right);
                return true;
            }
        }
        return false;
    }
    bool isBalanced(TreeNode *root) {
        int depth=0;
        return isBalancedHelper(root, depth);
    }
};


 