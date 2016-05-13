
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    def reverse(self,start,end):
        p=start
        prev=None
        while p!=end:
            next=p.next
            p.next=prev
            prev=p
            p=next
        p.next=prev
    # @param head, a ListNode
    # @param k, an integer
    # @return a ListNode
    def reverseKGroup(self, head, k):
        if head==None:
            return None
        if head.next==None:
            return head
        if k<=1:
            return head
        prev=None
        p=head
        while p!=None:
            q=p
            for i in range(k-1):
                q=q.next
                if q==None:
                    return head
            next=q.next
            self.reverse(p,q)
            if prev!=None:
                prev.next=q
            else:
                head=q
            p.next=next
            prev=p
            p=next
        return head
 