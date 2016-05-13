

# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a boolean
    def isValidBST(self, root):
        return self.ok(root, -2147483648, 2147483647)
    def ok(self,root,left,right):
        if root==None:
            return True
        return root.val > left and root.val < right and self.ok(root.left,left, root.val) and self.ok(root.right,root.val,right)
 