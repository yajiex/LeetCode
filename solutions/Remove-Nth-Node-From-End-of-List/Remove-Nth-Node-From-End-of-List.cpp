
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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        if(!head)
        {
            return head;
        }
        ListNode *p=head;
        ListNode *q=head;
        while(n--)
        {
            q=q->next;
        }
        if(!q)
            head=head->next;
        else
        {
            while(q->next)
            {
                p=p->next;
                q=q->next;
            }
            p->next=p->next->next;
        }
        return head;
    }
};


 