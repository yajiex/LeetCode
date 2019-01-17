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
    int kthSmallest(TreeNode* root, int k) {
        int count = countNodes(root->left);
        if(k<=count)
        {
            return kthSmallest(root->left, k);
        }
        else if (k>count+1)
        {
            return kthSmallest(root->right, k-count-1);
        }
        else
        {
            return root->val;
        }
    }

private:
    int countNodes(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        else
        {
            return countNodes(root->left) + countNodes(root->right) + 1;
        }
    }
};