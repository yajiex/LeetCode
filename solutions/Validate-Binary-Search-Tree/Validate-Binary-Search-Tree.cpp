
// /**
//  * Definition for binary tree
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     bool isValidBSTHelper(TreeNode *root,int lmax,int rmin)
//     {
//         if(!root)
//             return true;
//         return root->val>lmax && root->val<rmin && isValidBSTHelper(root->left,lmax,root->val) && isValidBSTHelper(root->right,root->val,rmin);
//     }
//     bool isValidBST(TreeNode *root) {
//         return isValidBSTHelper(root,INT_MIN,INT_MAX);
//     }
// };

// Review - 20190726
// O(n)
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
    bool isValidBST(TreeNode* root) {
        return isValid(root, LONG_MIN, LONG_MAX);
    }
private:
    bool isValid(TreeNode* root, long lmax, long rmin) {
        if(root)
        {
            return root->val > lmax && root->val < rmin && isValid(root->left, lmax, root->val) && isValid(root->right, root->val, rmin);
        }
        else
        {
            return true;
        }
    }
};
 