
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
//     int ans=INT_MIN;
//     int maxPath(TreeNode *root)
//     {
//         if(!root)
//             return INT_MIN;
//         int l=maxPath(root->left);
//         int r=maxPath(root->right);
//         int m=root->val;
//         if(l>0)
//             m+=l;
//         if(r>0)
//             m+=r;
//         ans=max(ans,m);
//         return max(max(l,r),0)+root->val;
//     }
//     int maxPathSum(TreeNode *root) {
//         maxPath(root);
//         return ans;
//     }
// };

// 2019-07-27
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
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
private:
    int helper(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        int ansL = helper(root->left);
        int ansR = helper(root->right);
        int tmp = root->val;
        if(ansL > 0)
        {
            tmp += ansL;
        }
        if(ansR > 0)
        {
            tmp += ansR;
        }
        ans = max(ans, tmp);
        return max(max(ansL, ansR), 0) + root->val;
    }
    int ans = INT_MIN;
};
 