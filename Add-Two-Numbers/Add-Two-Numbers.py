

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @return a ListNode
    def addTwoNumbers(self, l1, l2):
        head = ListNode(0)
        p = head
        flag = 0
        while l1!=None or l2!=None:
            val1 = l1.val if l1!=None else 0
            val2 = l2.val if l2!=None else 0
            val = val1 + val2 + flag
            p.val = val % 10
            flag = 1 if val>9 else 0
            if l1!=None:
                l1 = l1.next if l1.next!=None else None
            if l2!=None:
                l2 = l2.next if l2.next!=None else None
            if l1!=None or l2!=None or flag==1:
                p.next = ListNode(flag)
                p = p.next
        return head
 