
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
    ListNode *reverseLinkedList(ListNode *head,ListNode *tail)
    {
        ListNode *phead=NULL;
        while(head!=tail)
        {
            ListNode *p=head->next;
            head->next=phead;
            phead=head;
            head=p;
        }
        return phead;
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if(!head || !head->next || k==1)
        {
            return head;
        }
        int cnt=0;
        ListNode *s=head;
        ListNode *prev=NULL;
        while(s)
        {
            s=s->next;
            cnt++;
            if(cnt==k)
            {
                ListNode *pm=prev==NULL?head:prev->next;
                ListNode *pn=s;
                ListNode *phead=reverseLinkedList(pm,pn);
                if(prev==NULL)
                    head=phead;
                else
                {
                    prev->next=phead;
                }
                pm->next=pn;
                prev=pm;
                cnt=0;
            }
        }
        return head;
    }
};

 