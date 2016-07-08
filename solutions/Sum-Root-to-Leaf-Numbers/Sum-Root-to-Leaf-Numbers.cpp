
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
    int sumNumbers(TreeNode *root) {
        int ans=0;
        if(!root)
            return ans;
        queue<TreeNode*> qTree;
        queue<int> qNum;
        qTree.push(root);
        qNum.push(root->val);
        while(!qTree.empty())
        {
            TreeNode *s=qTree.front();
            qTree.pop();
            int cur=qNum.front();
            qNum.pop();
            if(!s->left && !s->right)
                ans+=cur;
            if(s->right)
            {
                qTree.push(s->right);
                qNum.push(cur*10+s->right->val);
            }
            if(s->left)
            {
                qTree.push(s->left);
                qNum.push(cur*10+s->left->val);
            }
        }
        return ans;
    }
};


 