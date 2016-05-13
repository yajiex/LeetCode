
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def dfs(self,root,sum,ans):
        if root.left==None and root.right==None:
            sum=sum*10+root.val
            ans[0]+=sum
            return 
        sum=sum*10+root.val
        if root.left!=None:
            self.dfs(root.left,sum,ans)
        if root.right!=None:
            self.dfs(root.right,sum,ans)
    # @param root, a tree node
    # @return an integer
    def sumNumbers(self, root):
        if root==None:
            return 0
        ans=[0]
        self.dfs(root,0,ans)
        return ans[0]
 