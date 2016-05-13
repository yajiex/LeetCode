
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
    int ans=INT_MIN;
    int maxPath(TreeNode *root)
    {
        if(!root)
            return INT_MIN;
        int l=maxPath(root->left);
        int r=maxPath(root->right);
        int m=root->val;
        if(l>0)
            m+=l;
        if(r>0)
            m+=r;
        ans=max(ans,m);
        return max(max(l,r),0)+root->val;
    }
    int maxPathSum(TreeNode *root) {
        maxPath(root);
        return ans;
    }
};


 