
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
//     vector<vector<int> > levelOrder(TreeNode *root) {
//         vector<vector<int> >ans;
//         if(!root)
//             return ans;
//         queue<vector<TreeNode*> >q;
//         vector<TreeNode*>vec;
//         vec.push_back(root);
//         q.push(vec);
//         while(!q.empty())
//         {
//             vec=q.front();
//             q.pop();
//             vector<TreeNode*>temp;
//             vector<int>t;
//             for(int i=0;i<vec.size();i++)
//             {
//                 t.push_back(vec[i]->val);
//                 if(vec[i]->left)
//                     temp.push_back(vec[i]->left);
//                 if(vec[i]->right)
//                     temp.push_back(vec[i]->right);
//             }
//             if(!t.empty())
//                 ans.push_back(t);
//             if(!temp.empty())
//                 q.push(temp);
//         }
//         return ans;
//     }
// };

// 2019-07-27
// O(n)
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
        {
            return ans;
        }
        queue<vector<TreeNode*>> q;
        vector<TreeNode*> vec;
        vec.push_back(root);
        q.push(vec);
        while(!q.empty())
        {
            vector<TreeNode*> vec = q.front();
            q.pop();
            vector<TreeNode*> tmp;
            vector<int> vals;
            for(int i=0;i<vec.size();i++)
            {
                if(vec[i])
                {
                    vals.push_back(vec[i]->val);
                    tmp.push_back(vec[i]->left);
                    tmp.push_back(vec[i]->right);
                }
            }
            if(!tmp.empty())
            {
                q.push(tmp);
            }
            if(!vals.empty())
            {
                ans.push_back(vals);
            }
        }
        return ans;
    }
};
 