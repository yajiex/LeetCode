

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @param m, an integer
    # @param n, an integer
    # @return a ListNode
    def reverseBetween(self, head, m, n):
        if head==None:
            return None
        p=head
        q=None
        for i in range(1,m):
            q=p
            p=p.next
        now=p
        prev=p
        p=p.next
        for i in range(m,n):
            next=p.next
            p.next=prev
            prev=p
            p=next
        now.next=p
        if q:
            q.next=prev
        else:
            head=prev
        return head
 