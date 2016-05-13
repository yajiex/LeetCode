
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
    void pathSumHelper(TreeNode *root,int sum,vector<vector<int> > &ans,vector<int> vec,int cur)
    {
        if(sum==cur && !root->left && !root->right)
        {
            ans.push_back(vec);
            return ;
        }
        if(root->left)
        {
            vec.push_back(root->left->val);
            pathSumHelper(root->left,sum,ans,vec,cur+root->left->val);
            vec.pop_back();
        }
        if(root->right)
        {
            vec.push_back(root->right->val);
            pathSumHelper(root->right,sum,ans,vec,cur+root->right->val);
            vec.pop_back();
        }
    }
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vector<vector<int> >ans;
        vector<int>vec;
        if(!root)
            return ans;
        vec.push_back(root->val);
        pathSumHelper(root,sum,ans,vec,root->val);
        return ans;
    }
};


 