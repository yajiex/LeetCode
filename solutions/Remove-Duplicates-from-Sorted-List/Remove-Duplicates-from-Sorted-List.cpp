
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
    ListNode *deleteDuplicates(ListNode *head) {
        if(!head)
        {
            return head;
        }
        ListNode *p=head->next;
        ListNode *q=head;
        while(p)
        {
            if(p->val != q->val)
            {
                q->next=p;
                q=p;
                
            }
            p=p->next;
        }
        q->next=NULL;
        return head;
    }
};


 