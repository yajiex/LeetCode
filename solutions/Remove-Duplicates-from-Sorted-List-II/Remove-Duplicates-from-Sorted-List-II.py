
‘’’
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
        if head.next==None:
            return head
        pprev=ListNode(-1)
        s=pprev
        p=head
        q=head.next
        pprev.next=head
        while q!=None:
            if p.val!=q.val:
                s=p
                p=q
                q=q.next
            else:
                while q!=None and q.val==p.val:
                    q=q.next
                if q==None:
                    s.next=None
                else:
                    p=q
                    q=q.next
                    s.next=p
        return pprev.next
 