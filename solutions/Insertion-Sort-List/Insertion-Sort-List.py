

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return a ListNode
    def insertionSortList(self, head):
        if head==None:
            return None
        if head.next==None:
            return head
        prev=head
        cur=head.next
        pprev=ListNode(-1)
        pprev.next=head
        while cur!=None:
            if cur.val>=prev.val:
                prev=cur
                cur=cur.next
            else:
                s=pprev
                p=s.next
                while p.val<cur.val:
                    s=p
                    p=p.next
                prev.next=cur.next
                cur.next=p
                s.next=cur
                cur=prev.next
        return pprev.next
 