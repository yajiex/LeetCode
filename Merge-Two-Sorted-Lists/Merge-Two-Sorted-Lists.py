
‘’’
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    # @param two ListNodes
    # @return a ListNode
    def mergeTwoLists(self, l1, l2):
        ans=l1
        if l1==None and l2==None:
            return None
        elif l1==None:
            return l2
        elif l2==None:
            return l1
        elif l1.val<l2.val:
            ans=l1
            l1=l1.next
        else:
            ans=l2
            l2=l2.next
        p=ans
        while l1!=None and l2!=None:
            if l1.val<l2.val:
                p.next=l1
                p=p.next
                l1=l1.next
            else:
                p.next=l2
                p=p.next
                l2=l2.next
        if l1!=None:
            p.next=l1
        else:
            p.next=l2
        return ans
            
 