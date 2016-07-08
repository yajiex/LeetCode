
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
        TreeLinkNode *left=root;
        while(left)
        {
            TreeLinkNode *p=left;
            while(p)
            {
                if(p->left)
                    p->left->next=p->right;
                if(p->right)
                    p->right->next=p->next?p->next->left:NULL;
                p=p->next;
            }
            left=left->left;
        }
    }
};


 