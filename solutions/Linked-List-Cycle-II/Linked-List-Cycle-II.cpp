
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(!head || !head->next)
//             return NULL;
//         ListNode *slow=head;
//         ListNode *fast=head;
//         while(slow)
//         {
//             slow=slow->next;
//             if(!fast)
//                 return NULL;
//             fast=fast->next;
//             if(!fast)
//                 return NULL;
//             fast=fast->next;
//             if(slow==fast)
//                 break;
//         }
//         if(!slow)
//             return NULL;
//         while(head!=slow)
//         {
//             head=head->next;
//             slow=slow->next;
//         }
//         return head;
//     }
// };

// 2019-07-27
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast)
        {
            fast = fast->next;
            if(fast)
            {
                fast = fast->next;
            }
            else
            {
                return NULL;
            }
            slow = slow->next;
            if(fast == slow)
            {
                while(head != slow)
                {
                    head = head->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
 