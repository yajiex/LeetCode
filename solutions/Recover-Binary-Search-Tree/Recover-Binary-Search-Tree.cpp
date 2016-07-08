
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
    TreeNode *pre;
    TreeNode *first;
    TreeNode *second;
    void inorder(TreeNode *root)
    {
        if(!root)
            return;
        inorder(root->left);
        if(pre && pre->val>root->val)
        {
            if(!first)
            {
                first=pre;
                second=root;
            }
            else
                second=root;
        }
        pre=root;
        inorder(root->right);
    }
    void recoverTree(TreeNode *root) {
        inorder(root);
        if(first)
            swap(first->val,second->val);
    }
};


 