
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
    ListNode* findMiddle(ListNode *head)
    {
        if(!head || !head->next)
        {
            return NULL;
        }
        ListNode *p=head;
        ListNode *q=head;
        while(q)
        {
            p=p->next;
            if(!q)
                break;
            q=q->next;
            if(!q)
                break;
            q=q->next;
        }
        return p;
    }
    ListNode* merge(ListNode *head1,ListNode *head2)
    {
        ListNode *head=head1;
        ListNode *p=head;
        head1=head1->next;
        while(head2)
        {
            p->next=head2;
            p=head2;
            head2=head2->next;
            if(!head1)
                break;
            p->next=head1;
            p=head1;
            head1=head1->next;
        }
        p->next=NULL;
        return head;
    }
    void reorderList(ListNode *head)
    {
        if(!head || !head->next)
        {
            return;
        }
        ListNode *head2=findMiddle(head);
        head2=reverseLinkedList(head2,NULL);
        head=merge(head,head2);
    }
};

 