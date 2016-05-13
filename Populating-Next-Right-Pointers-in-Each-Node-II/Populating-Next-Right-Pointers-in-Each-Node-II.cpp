
/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        while(root)
        {
            TreeLinkNode *phead=NULL;
            TreeLinkNode *prev=NULL;
            while(root)
            {
                if(root->left)
                {
                    if(prev)
                        prev->next=root->left;
                    else
                        phead=root->left;
                    prev=root->left;
                }
                if(root->right)
                {
                    if(prev)
                        prev->next=root->right;
                    else
                        phead=root->right;
                    prev=root->right;
                }
                root=root->next;
            }
            root=phead;
        }
    }
};


 