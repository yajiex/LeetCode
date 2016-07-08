
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
    vector<int> postorderTraversal(TreeNode *root) {
        stack<TreeNode*>st;
        vector<int>ans;
        if(!root)
            return ans;
        st.push(root);
        TreeNode *prev=root;
        while(!st.empty())
        {
            TreeNode *cur=st.top();
            if(!cur->left&&!cur->right || cur->left==prev || cur->right==prev)
            {
                st.pop();
                ans.push_back(cur->val);
                prev=cur;
            }
            else
            {
                if(cur->right)
                    st.push(cur->right);
                if(cur->left)
                    st.push(cur->left);
            }
        }
        return ans;
    }
};


 