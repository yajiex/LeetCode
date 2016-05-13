
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
    TreeNode *sortedArrayToBSTHelper(vector<int> &num, int l, int r)
    {
        if(l>r)
            return NULL;
        int m=l+(r-l)/2;
        TreeNode *root=new TreeNode(num[m]);
        root->left=sortedArrayToBSTHelper(num,l,m-1);
        root->right=sortedArrayToBSTHelper(num,m+1,r);
        return root;
    }
    TreeNode *sortedArrayToBST(vector<int> &num) {
        return sortedArrayToBSTHelper(num,0,num.size()-1);
    }
};


 