

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return a ListNode
    def sortList(self, head):
        if head==None or head.next==None:
            return head
        return self.mergesort(head)
    def mergesort(self,head):
        if head==None or head.next==None:
            return head
        p=head
        q=head
        pre=None
        while q!=None and q.next!=None:
            q=q.next.next
            pre=p
            p=p.next
        pre.next=None
        return self.merge(self.mergesort(head),self.mergesort(p))
    def merge(self,l,r):
        temp=ListNode(0)
        p=temp
        while l!=None and r!=None:
            if l.val<=r.val:
                p.next=l
                l=l.next
            else:
                p.next=r
                r=r.next
            p=p.next
        if l==None:
            p.next=r
        else:
            p.next=l
        p=temp.next
        temp.next=None
        return p
 