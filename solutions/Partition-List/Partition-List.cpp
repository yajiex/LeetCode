
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
    ListNode *partition(ListNode *head, int x) {
        if(!head)
            return head;
        ListNode *l1,*l2;
        ListNode *head1=NULL,*head2=NULL;
        ListNode *p=head;
        while(p)
        {
            if(p->val<x)
            {
                if(!head1)
                    head1=p;
                else
                    l1->next=p;
                l1=p;
            }
            else
            {
                if(!head2)
                    head2=p;
                else
                    l2->next=p;
                l2=p;
            }
            p=p->next;
        }
        if(!head1)
            return head2;
        l1->next=head2;
        if(head2)
            l2->next=NULL;
        return head1;
    }
};


 