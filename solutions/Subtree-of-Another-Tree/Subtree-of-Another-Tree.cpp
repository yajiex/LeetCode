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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        return isSubtreeHelper(s, t);
    }
    
private:
    bool equal(TreeNode* s, TreeNode* t)
    {
        if(!s && !t)
        {
            return true;
        }
        else if(s && t)
        {
            return s->val == t->val && equal(s->left, t->left) && equal(s->right, t->right);
        }
        else
        {
            return false;
        }
    }
    bool isSubtreeHelper(TreeNode* s, TreeNode* t)
    {
        if (!s)
        {
            return false;
        }
        return equal(s, t) || isSubtreeHelper(s->left, t) || isSubtreeHelper(s->right, t);
    }
};