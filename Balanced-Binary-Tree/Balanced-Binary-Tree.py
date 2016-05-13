
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘''
class Solution:
    def getDepth(self,root):
        if root==None:
            return 0
        return max(self.getDepth(root.left),self.getDepth(root.right))+1
    # @param root, a tree node
    # @return a boolean
    def isBalanced(self, root):
        if root==None:
            return True
        l=self.getDepth(root.left)
        r=self.getDepth(root.right)
        return abs(l-r)<=1 and self.isBalanced(root.left) and self.isBalanced(root.right)
 