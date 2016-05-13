
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    # @param head, a ListNode
    # @return a list node
    def detectCycle(self, head):
        if head==None:
            return None
        if head.next==None:
            return None
        if head.next.next==None:
            return None
        p=head
        q=head.next.next
        while p!=None and q!=None:
            if q.next==None:
                return None
            if q.next.next==None:
                return None
            if q.val==p.val:
                p=head
                q=q.next.next
                while p!=q:
                    p=p.next
                    q=q.next
                return p
            p=p.next
            q=q.next.next
        return None
 