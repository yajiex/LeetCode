
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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
            return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow)
        {
            slow=slow->next;
            if(!fast)
                return NULL;
            fast=fast->next;
            if(!fast)
                return NULL;
            fast=fast->next;
            if(slow==fast)
                break;
        }
        if(!slow)
            return NULL;
        while(head!=slow)
        {
            head=head->next;
            slow=slow->next;
        }
        return head;
    }
};


 