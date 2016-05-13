
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
    ListNode *rotateRight(ListNode *head, int k) {
        if(!head ||!head->next || !k)
            return head;
        ListNode *p=head;
        ListNode *q=head;
        int n=0;
        while(p)
        {
            n++;
            q=p;
            p=p->next;
        }
        p=head;
        k=k%n;
        k=n-k-1;
        while(k--)
            p=p->next;
        q->next=head;
        head=p->next;
        p->next=NULL;
        return head;
    }
};


 