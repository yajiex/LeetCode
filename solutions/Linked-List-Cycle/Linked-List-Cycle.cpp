
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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next)
        {
            return false;
        }
        ListNode *p=head;
        ListNode *q=head;
        while(p)
        {
            p=p->next;
            if(!q)
                return false;
            q=q->next;
            if(!q)
                return false;
            q=q->next;
            if(p==q)
                return true;
        }
        return false;
    }
};


 