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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
        {
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* p = even;
        while(p && p->next)
        {
            odd->next = odd->next->next;
            p->next = p->next->next;
            odd = odd->next;
            p = p->next;
        }
        odd->next = even;
        return head;
    }
};