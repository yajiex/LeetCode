
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
    vector<int> preorderTraversal(TreeNode *root) {
        stack<TreeNode*>st;
        vector<int>ans;
        while(!st.empty() || root)
        {
            if(root)
            {
                ans.push_back(root->val);
                if(root->right)
                    st.push(root->right);
                root=root->left;
            }
            else
            {
                root=st.top();
                st.pop();
            }
        }
        return ans;
    }
};


 