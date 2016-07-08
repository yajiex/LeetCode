
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    # @param a ListNode
    # @return a ListNode
    def swapPairs(self, head):
        if head==None:
            return None
        if head.next==None:
            return head
        p=head
        q=head.next
        p.next=q.next
        q.next=p
        head=q
        while p!=None:
            s=p
            p=p.next
            if p==None:
                break
            q=p.next
            if q==None:
                s.next=p
                break
            p.next=q.next
            q.next=p
            s.next=q
        return head
 