
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
    vector<TreeNode*> buildTree(int l, int r)
    {
        vector<TreeNode*>ans;
        if(l>r)
        {
            ans.push_back(NULL);
            return ans;
        }
        for(int i=l;i<=r;i++)
        {
            vector<TreeNode*>left=buildTree(l,i-1);
            vector<TreeNode*>right=buildTree(i+1,r);
            for(int j=0;j<left.size();j++)
            {
                for(int k=0;k<right.size();k++)
                {
                    TreeNode *root=new TreeNode(i+1);
                    root->left=left[j];
                    root->right=right[k];
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode *> generateTrees(int n) {
        return buildTree(0,n-1);
    }
};


 