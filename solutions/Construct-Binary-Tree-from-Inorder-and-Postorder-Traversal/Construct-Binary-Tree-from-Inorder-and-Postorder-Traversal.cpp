
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
    TreeNode *buildTreeHelper(vector<int> &inorder,int l1,int r1,vector<int> &postorder,int l2,int r2)
    {
        if(l1>r1)
            return NULL;
        int val=postorder[r2];
        int index;
        for(int i=l1;i<=r1;i++)
        {
            if(inorder[i]==val)
            {
                index=i;
                break;
            }
        }
        TreeNode *root=new TreeNode(val);
        root->left=buildTreeHelper(inorder,l1,index-1,postorder,l2,l2+index-l1-1);
        root->right=buildTreeHelper(inorder,index+1,r1,postorder,l2+index-l1,r2-1);
        return root;
    }
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        return buildTreeHelper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1);
    }
};


 