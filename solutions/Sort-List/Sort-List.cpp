
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
    ListNode *merge(ListNode *l1, ListNode *l2)
    {
        ListNode *shead=new ListNode(0);
        ListNode *p=shead;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                p->next=l1;
                p=l1;
                l1=l1->next;
            }
            else
            {
                p->next=l2;
                p=l2;
                l2=l2->next;
            }
        }
        if(l1)
            p->next=l1;
        else
            p->next=l2;
        return shead->next;
    }
    ListNode *mergeSort(ListNode *head)
    {
        if(!head || !head->next)
            return head;
        ListNode *p=head;
        ListNode *q=head;
        ListNode *prev=NULL;
        while(q)
        {
            prev=p;
            p=p->next;
            if(!q)
                break;
            q=q->next;
            if(!q)
                break;
            q=q->next;
        }
        prev->next=NULL;
        return merge(mergeSort(head),mergeSort(p));
    }
    ListNode *sortList(ListNode *head) {
        if(!head || !head->next)
            return head;
        return mergeSort(head);
    }
};


 