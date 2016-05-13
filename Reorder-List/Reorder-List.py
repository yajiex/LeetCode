

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param head, a ListNode
    # @return nothing
    def reorderList(self, head):
        if head==None or head.next==None:
            return
        slow=head
        fast=head
        while fast.next!=None:
            fast=fast.next
            if fast.next!=None:
                fast=fast.next
            else:
                break
            slow=slow.next
        head1=head
        head2=slow.next
        slow.next=None
        cur=head2
        post=cur.next
        cur.next=None
        while post!=None:
            temp=post.next
            post.next=cur
            cur=post
            post=temp
        head2=cur
        p=head1
        q=head2
        while q!=None:
            temp1=p.next
            temp2=q.next
            p.next=q
            q.next=temp1
            p=temp1
            q=temp2
 