
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
    bool isSymmetric(TreeNode *root) {
        if(!root)
            return true;
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        st1.push(root->left);
        st2.push(root->right);
        while(!st1.empty() && !st2.empty())
        {
            TreeNode *l=st1.top();
            st1.pop();
            TreeNode *r=st2.top();
            st2.pop();
            if(!l && !r)
                continue;
            else if(l && r)
            {
                if(l->val==r->val)
                {
                    st1.push(l->left);
                    st1.push(l->right);
                    st2.push(r->right);
                    st2.push(r->left);
                }
                else
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};


 