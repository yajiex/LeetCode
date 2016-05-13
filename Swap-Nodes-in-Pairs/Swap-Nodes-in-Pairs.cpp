
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
    ListNode *swapPairs(ListNode *head) {
        if(!head || !head->next)
            return head;
        ListNode *s=head;
        ListNode *p=head;
        ListNode *prev=NULL;
        ListNode *phead=NULL;
        while(p)
        {
            if(!p->next)
                return phead;
            else
            {
                s=p;
                p=p->next;
                ListNode *t=p->next;
                if(prev)
                    prev->next=p;
                p->next=s;
                s->next=t;
                if(!phead) 
                    phead=p;
                prev=s;
                p=t;
            }
        }
        return phead;
    }
};


 