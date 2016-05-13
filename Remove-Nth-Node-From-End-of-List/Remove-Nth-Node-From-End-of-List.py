
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    # @return a ListNode
    def removeNthFromEnd(self, head, n):
        p=head
        q=head
        s=None
        for i in range(1,n):
            q=q.next
        while q.next!=None:
            s=p
            p=p.next
            q=q.next
        if s==None:
            head=p.next
        else:
            s.next=p.next
        return head


 