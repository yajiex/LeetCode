
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’'
class Solution:
    # @param head, a ListNode
    # @param x, an integer
    # @return a ListNode
    def partition(self, head, x):
        if head==None:
            return None
        p=l=ListNode(0)
        q=r=ListNode(0)
        prev=None
        cur=head
        while cur!=None:
            prev=cur
            cur=cur.next
            if prev.val<x:
                p.next=prev
                p=prev
                p.next=None
            else:
                q.next=prev
                q=prev
                q.next=None
        p.next=r.next
        return l.next
 