
/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head)
            return head;
        RandomListNode *p=head;
        while(p)
        {
            RandomListNode *q=p->next;
            p->next=new RandomListNode(p->label);
            p->next->next=q;
            p=q;
        }
        p=head;
        while(p)
        {
            p->next->random=p->random==NULL?NULL:p->random->next;
            p=p->next->next;
        }
        p=head;
        RandomListNode *r=head->next;
        RandomListNode *q=r;
        while(true)
        {
            p->next=q->next;
            p=p->next;
            if(!p)
                break;
            q->next=p->next;
            q=q->next;
        }
        return r;
    }
};


 