
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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        if(!head || !head->next || m==n)
        {
            return head;
        }
        ListNode *p=head;
        ListNode *prev=NULL;
        ListNode *pm;
        ListNode *pn;
        int cnt=0;
        while(p)
        {
            cnt++;
            if(cnt==m)
            {
                prev=s;
                pm=p;
            }
            if(cnt==n)
            {
                pn=p->next;
            }
            s=p;
            p=p->next;
        }
        ListNode *phead=pm;
        p=phead->next;
        ListNode *q=p->next;
        while(p!=pn)
        {
            p->next=phead;
            phead=p;
            p=q;
            if(q)
                q=q->next;
        }
        if(prev)
            prev->next=phead;
        else
            head=phead;
        pm->next=pn;
        return head;
    }
};


 