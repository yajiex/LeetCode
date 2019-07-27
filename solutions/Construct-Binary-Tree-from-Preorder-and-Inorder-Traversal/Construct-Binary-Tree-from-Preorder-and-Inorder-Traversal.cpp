
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
//     TreeNode *buildTreeHelper(vector<int> &preorder,int l1,int r1,vector<int> &inorder,int l2,int r2)
//     {
//         if(l1>r1)
//             return NULL;
//         int val=preorder[l1];
//         int index;
//         for(int i=l2;i<=r2;i++)
//         {
//             if(inorder[i]==val)
//             {
//                 index=i;
//                 break;
//             }
//         }
//         TreeNode *root=new TreeNode(val);
//         root->left=buildTreeHelper(preorder,l1+1,l1+1+index-l2-1,inorder,l2,index-1);
//         root->right=buildTreeHelper(preorder,l1+1+index-l2,r1,inorder,index+1,r2);
//         return root;
//     }
//     TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
//         return buildTreeHelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
//     }
// };

// 2019-07-27
// O(n^2)
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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }
private:
    TreeNode* helper(vector<int>& preorder, int l1, int r1, vector<int>& inorder, int l2, int r2)
    {
        if(l1>r1)
        {
            return NULL;
        }
        int target = preorder[l1];
        int m = l2;
        for(int i=l2;i<=r2;i++)
        {
            if(inorder[i] == target)
            {
                m = i;
                break;
            }
        }
        TreeNode* root = new TreeNode(target);
        root->left = helper(preorder, l1+1, l1+1+(m-l2-1), inorder, l2, m-1);
        root->right = helper(preorder, l1+1+(m-l2), r1, inorder, m+1, r2);
        return root;
    }
};