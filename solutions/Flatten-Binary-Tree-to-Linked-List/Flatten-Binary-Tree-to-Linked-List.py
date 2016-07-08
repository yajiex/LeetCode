

# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return nothing, do it in place
    lastNode = None
    def flatten(self, root):
        if root==None:
            return
        if self.lastNode!=None:
            self.lastNode.left = None
            self.lastNode.right = root
        self.lastNode = root
        right = root.right
        self.flatten(root.left)
        self.flatten(right)
 