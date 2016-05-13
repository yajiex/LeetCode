
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    # @param root, a tree node
    # @return an integer
    def maxDepth(self, root):
        if root==None:
            return 0
        if root.left==None and root.right==None:
            return 1
        else:
            return max(self.maxDepth(root.left),self.maxDepth(root.right))+1
        
 