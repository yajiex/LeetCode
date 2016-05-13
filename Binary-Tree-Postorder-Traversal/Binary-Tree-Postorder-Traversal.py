
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
    # @return a list of integers
    def postorderTraversal(self, root):
        ans=[]
        if root==None:
            return ans
        ans.extend(self.postorderTraversal(root.left))
        ans.extend(self.postorderTraversal(root.right))
        ans.append(root.val)
        return ans
 