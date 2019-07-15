
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
//     ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
//         ListNode *l=NULL;
//         if(!l1 && !l2)
//             return l;
//         else if(!l1)
//             return l2;
//         else if(!l2)
//             return l1;
//         if(l1->val<l2->val)
//         {
//             l=l1;
//             l1=l1->next;
//         }
//         else
//         {
//             l=l2;
//             l2=l2->next;
//         }
//         ListNode *p=l;
//         while(l1 && l2)
//         {
//             if(l1->val<l2->val)
//             {
//                 p->next=l1;
//                 p=l1;
//                 l1=l1->next;
//             }
//             else
//             {
//                 p->next=l2;
//                 p=l2;
//                 l2=l2->next;
//             }
//         }
//         if(l1)
//             p->next=l1;
//         else
//             p->next=l2;
//         return l;
//     }
// };


// 2019-07-15
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)
        {
            return l2;
        }
        else if (!l2)
        {
            return l1;
        }
        ListNode *pre = new ListNode(0);
        ListNode *p = pre;
        while(l1 && l2)
        {
            if (l1->val < l2->val)
            {
                p->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            else
            {
                p->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            p = p->next;
        }
        p->next = l1 ? l1 : l2;
        return pre->next;
    }
};