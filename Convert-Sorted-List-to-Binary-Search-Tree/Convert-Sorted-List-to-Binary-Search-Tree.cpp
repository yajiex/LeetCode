
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    TreeNode *buildTree(ListNode *&head, int l, int r)
    {
        if(l>r)
            return NULL;
        else
        {
            int m=l+(r-l)/2;
            TreeNode *root = new TreeNode(0);
            root->left=buildTree(head,l,m-1);
            root->val = head->val;
            head=head->next;
            root->right=buildTree(head,m+1,r);
            return root;
        }
    }
    TreeNode *sortedListToBST(ListNode *head) {
        ListNode *p=head;
        int n=0;
        while(p)
        {
            n++;
            p=p->next;
        }
        return buildTree(head,0,n-1);
    }
};


 