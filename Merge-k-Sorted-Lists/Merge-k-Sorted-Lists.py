

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param a list of ListNode
    # @return a ListNode
    def mergeKLists(self, lists):
        if lists==None or len(lists)==0:
            return None
        return self.mergelist(lists,0,len(lists)-1)
    def mergelist(self,lists,l,r):
        if l<r:
            m = (l+r)/2
            return self.merge(self.mergelist(lists,l,m),self.mergelist(lists,m+1,r))
        return lists[l]
    def merge(self,l1,l2):
        dummy = ListNode(0)
        dummy.next=l1
        cur = dummy
        while l1!=None and l2!=None:
            if l1.val<l2.val:
                l1=l1.next
            else:
                next=l2.next
                cur.next=l2
                l2.next=l1
                l2=next
            cur=cur.next
        if l2!=None:
            cur.next=l2
        return dummy.next
 