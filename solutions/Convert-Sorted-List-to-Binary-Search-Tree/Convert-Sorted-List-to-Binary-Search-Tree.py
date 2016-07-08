
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
#
 Definition for singly-linked list.
 class ListNode:
     def __init__(self, x):
         self.val = x
         self.next = None
‘’’
class Solution:
    def buildTree(self,num,l,r):
        if l>r:
            return None
        m=l+(r-l)/2
        root=TreeNode(num[m])
        root.left=self.buildTree(num,l,m-1)
        root.right=self.buildTree(num,m+1,r)
        return root
    # @param head, a list node
    # @return a tree node
    def sortedListToBST(self, head):
        num=[]
        temp=head
        while temp!=None:
            num.append(temp.val)
            temp=temp.next
        return self.buildTree(num,0,len(num)-1)
 