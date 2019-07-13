
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
//     ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
//         ListNode *head=NULL;
//         ListNode *p=NULL;
//         int flag=0;
//         while(l1||l2)
//         {
//             int val1=0;
//             int val2=0;
//             if(l1)
//             {
//                 val1=l1->val;
//                 l1=l1->next;
//             }
//             if(l2)
//             {
//                 val2=l2->val;
//                 l2=l2->next;
//             }
//             int val=val1+val2+flag;
//             if(val>9)
//             {
//                 val=val-10;
//                 flag=1;
//             }
//             else
//                 flag=0;
//             ListNode *t=new ListNode(val);
//             if(!p)
//                 head=t;
//             else
//                 p->next=t;
//             p=t;
//         }
//         if(flag)
//             p->next=new ListNode(flag);
//         return head;
//     }
// };

// 2019-07-13
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 // O(n)
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if (!l1)
        {
            return l2;
        }
        if (!l2)
        {
            return l1;
        }
        ListNode* pre = new ListNode(0);
        ListNode* p = pre;
        int flag = 0;
        while(l1 || l2)
        {
            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            int tmp = (v1 + v2 + flag) % 10;
            flag = (v1 + v2 + flag) / 10;
            p->next = new ListNode(tmp);
            p = p->next;
            if (l1) 
            {
                l1 = l1->next;
            }
            if (l2)
            {
                l2 = l2->next;
            }
        }
        if (flag)
        {
            p->next = new ListNode(flag);
        }
        return pre->next;
    }
};
 