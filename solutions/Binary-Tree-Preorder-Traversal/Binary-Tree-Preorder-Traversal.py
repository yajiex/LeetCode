

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
    def preorderTraversal(self, root):
        ans=[]
        if root==None:
            return ans
        ans.append(root.val);
        ans.extend(self.preorderTraversal(root.left));
        ans.extend(self.preorderTraversal(root.right));
        return ans
 