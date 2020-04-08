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
    ListNode* middleNode(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast) {
            fast = fast->next;
            if(!fast) {
                break;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
    }
};