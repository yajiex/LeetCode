
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class ListNodeCompare:public binary_function<ListNode*,ListNode*,bool>
// {
// public:
//     bool operator()(ListNode* t1,ListNode *t2)const
//     {
//         if(!t1||!t2)
//         {
//             return !t2;
//         }
//         return t1->val>t2->val;
//     }
// };
// class Solution {
// public:
//     ListNode *mergeKLists(vector<ListNode *> &lists) {
//         if(lists.empty())
//         {
//             return NULL;
//         }
//         priority_queue<ListNode*,vector<ListNode*>,ListNodeCompare> pq;
//         for(int i=0;i<lists.size();i++)
//         {
//             if(lists[i]!=NULL)
//             {
//                 pq.push(lists[i]);
//             }
//         }
//         ListNode phead(-1);
//         ListNode *p=&phead;
//         while(!pq.empty())
//         {
//             ListNode *q=pq.top();
//             pq.pop();
//             p->next=q;
//             p=p->next;
//             if(q->next)
//             {
//                 pq.push(q->next);
//             }
//         }
//         return phead.next;
//     }
// };

// 方法二：
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
//     ListNode *merge(ListNode *l1, ListNode *l2)
//     {
//         ListNode *shead=new ListNode(0);
//         ListNode *p=shead;
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
//         return shead->next;
//     }
//     ListNode *mergeKListsHelper(vector<ListNode *> &lists, int l, int r)
//     {
//         if(l<r)
//         {
//             int m=l+(r-l)/2;
//             return merge(mergeKListsHelper(lists,l,m),mergeKListsHelper(lists,m+1,r));
//         }
//         return lists[l];
//     }
//     ListNode *mergeKLists(vector<ListNode *> &lists) {
//         if(lists.empty())
//             return NULL;
//         return mergeKListsHelper(lists,0,lists.size()-1);
//     }
// };

// 2019-07-20
// O(knlogk)
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if (n == 0) {
            return NULL;
        }
        return mergeKListsHelper(lists, 0, n - 1);
    }
    
private:
    ListNode* mergeKListsHelper(vector<ListNode*>& lists, int l, int r) {
        if (l < r) {
            return merge(mergeKListsHelper(lists, l, (l+r) / 2), mergeKListsHelper(lists, (l+r)/2 + 1, r));
        } else {
            return lists[l];
        }
    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1) {
            return l2;
        }
        if (!l2) {
            return l1;
        }
        ListNode* pre = new ListNode(0);
        ListNode* p = pre;
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
        if (l1)
        {
            p->next = l1;
        }
        else if(l2)
        {
            p->next = l2;
        }
        
        return pre->next;
    }
};