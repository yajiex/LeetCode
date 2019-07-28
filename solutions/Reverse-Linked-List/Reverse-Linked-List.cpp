// 2019-07-28
// O(n)
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
    ListNode* reverseList(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* p = head;
        while(p) 
        {
            ListNode* tmp = p->next;
            p->next = newHead;
            newHead = p;
            p = tmp;
        }
        return newHead;
    }
};