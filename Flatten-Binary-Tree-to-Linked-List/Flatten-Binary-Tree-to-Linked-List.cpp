
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
    TreeNode *head=NULL;
    void flatten(TreeNode *root) {
        if(!root)
            return;
        if(head)
        {
            head->right=root;
            head->left=NULL;
        }
        TreeNode *temp=root->right;
        head=root;
        flatten(root->left);
        flatten(temp);
    }
};

// NonRecursive:
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
    TreeNode *head=NULL;
    void flatten(TreeNode *root) {
        while(root)
        {
        // Attatches the right sub-tree to the rightmost leaf of the left sub-tree:
            if(root->left)
            {
                TreeNode *rightMost = root->left;
                while(rightMost->right)
                    rightMost=rightMost->right;
                rightMost->right=root->right;
                // Makes the left sub-tree to the right sub-tree:
                root->right=root->left;
                root->left=NULL;
            }
            // Flatten the rest of the tree:
            root=root->right;
        }
    }
};

 