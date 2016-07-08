
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        ListNode *head=NULL;
        ListNode *p=NULL;
        int flag=0;
        while(l1||l2)
        {
            int val1=0;
            int val2=0;
            if(l1)
            {
                val1=l1->val;
                l1=l1->next;
            }
            if(l2)
            {
                val2=l2->val;
                l2=l2->next;
            }
            int val=val1+val2+flag;
            if(val>9)
            {
                val=val-10;
                flag=1;
            }
            else
                flag=0;
            ListNode *t=new ListNode(val);
            if(!p)
                head=t;
            else
                p->next=t;
            p=t;
        }
        if(flag)
            p->next=new ListNode(flag);
        return head;
    }
};


 