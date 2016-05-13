
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
    ListNode *insertionSortList(ListNode *head) {
        if(!head || !head->next)
            return head;
        ListNode *qhead=head;
        ListNode *q=head;
        ListNode *p=head->next;
        while(p)
        {
            bool flag=false;
            ListNode *s=qhead;
            ListNode *prev=NULL;
            while(s!=p)
            {
                if(s->val<=p->val)
                {
                    prev=s;
                    s=s->next;
                }
                else
                {
                    flag=true;
                    ListNode *t=p->next;
                    q->next=t;
                    if(s==qhead)
                    {
                        p->next=qhead;
                        qhead=p;
                    }
                    else
                    {
                        prev->next=p;
                        p->next=s;
                    }
                    p=t;
                    break;
                }
            }
            if(!flag)
            {
                q->next=p;
                q=p;
                p=p->next;
                q->next=p;
            }
        }
        return qhead;
    }
};


 