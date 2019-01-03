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
    bool isPalindrome(ListNode* head) {
        reverseHead = head;
        return isPalindromeHelper(head);
    }
    
    bool isPalindromeHelper(ListNode* p)
    {
        if (p == nullptr)
        {
            return true;
        }
        
        auto ans = isPalindromeHelper(p->next) && (p->val == reverseHead->val);
        reverseHead = reverseHead->next;
        return ans;
    }

private:
    ListNode* reverseHead;
};