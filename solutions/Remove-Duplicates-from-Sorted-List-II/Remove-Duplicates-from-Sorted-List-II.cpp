
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(!head || !head->next)
            return head;
        ListNode *p=NULL;
        ListNode *q=head;
        ListNode *phead=NULL;
        while(q)
        {
            if(!q->next || q->val!=q->next->val)
            {
                if(p)
                    p->next=q;
                else
                    phead=q;
                p=q;
            }
            else
            {
                while(q->next && q->val==q->next->val)
                    q=q->next;
            }
            q=q->next;
        }
        if(phead)
            p->next=q;
        return phead;
    }
};


 