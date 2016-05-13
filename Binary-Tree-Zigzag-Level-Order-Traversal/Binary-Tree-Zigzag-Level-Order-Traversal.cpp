
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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        vector<vector<int> >ans;
        if(!root)
            return ans;
        queue<vector<TreeNode*> >q;
        vector<TreeNode*>vec;
        vec.push_back(root);
        q.push(vec);
        bool flag=false;
        while(!q.empty())
        {
            vec=q.front();
            q.pop();
            vector<TreeNode*>temp;
            vector<int>t;
            for(int i=0;i<vec.size();i++)
            {
                t.push_back(vec[i]->val);
                if(vec[i]->left)
                    temp.push_back(vec[i]->left);
                if(vec[i]->right)
                    temp.push_back(vec[i]->right);
            }
            if(!t.empty())
            {
                if(flag)
                    reverse(t.begin(),t.end());
                flag=!flag;
                ans.push_back(t);
            }
            if(!temp.empty())
                q.push(temp);
        }
        return ans;
    }
};


 