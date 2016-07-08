
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    # @param head, a ListNode
    # @return a boolean
    def hasCycle(self, head):
        if head==None:
            return False
        if head.next==None:
            return False
        if head.next.next==None:
            return False
        p=head
        q=head.next.next
        while p!=None and q!=None:
            if q.next==None:
                return False
            if q.next.next==None:
                return False
            if q.val==p.val:
                return True
            p=p.next
            q=q.next.next
        return False
        
 