

# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return an integer
    def maxPathSum(self, root):
        if root==None:
            return 0
        self.ans=root.val
        self.dfs(root)
        return self.ans
    def dfs(self,root):
        if root==None:
            return -2147483648
        l=self.dfs(root.left)
        r=self.dfs(root.right)
        m=root.val
        if l>0:
            m+=l
        if r>0:
            m+=r
        self.ans=max(self.ans,m)
        return max(max(l,r),0)+root.val
 