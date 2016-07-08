
‘''
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    # @param head, a ListNode
    # @return a ListNode
    def deleteDuplicates(self, head):
        if head==None:
            return None
        p=head
        if head.next==None:
            return head
        q=head.next
        ans=p
        while p!=None:
            if q==None:
                p.next=q
                p=q
                continue
            if p.val!=q.val:
                p.next=q
                p=q
            q=q.next
        return ans
 