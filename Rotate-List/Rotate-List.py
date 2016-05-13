

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @param k, an integer
    # @return a ListNode
    def rotateRight(self, head, k):
        if head==None or head.next==None or k==0:
            return head
        length=0
        p=head
        q=head
        while p!=None:
            length=length+1
            q=p
            p=p.next
        k = k % length
        p=head
        for i in range(length-k-1):
            p=p.next
        q.next=head
        head=p.next
        p.next=None
        return head
 