
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def ok(self,l,r):
        if l==None and r==None:
            return True
        elif l==None and r!=None or l!=None and r==None:
            return False
        else:
            return self.ok(l.left,r.right) and self.ok(l.right,r.left) and l.val==r.val
    # @param root, a tree node
    # @return a boolean
    def isSymmetric(self, root):
        if root==None:
            return True
        return self.ok(root.left,root.right)
 