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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return helper(preorder, INT_MIN, INT_MAX, index);
    }

private:
    TreeNode* helper(vector<int>& preorder, int start, int end, int &index) {
        if (index == preorder.size() || preorder[index] < start || preorder[index] > end) {
            return NULL;
        }
        
        int val = preorder[index++];
        TreeNode* node = new TreeNode(val);
        node->left = helper(preorder, start, val, index);
        node->right = helper(preorder, val, end, index);
        return node;
    }
};