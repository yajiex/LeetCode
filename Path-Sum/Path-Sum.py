
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def dfs(self,root,sum,cnt,flag):
        if flag[0]:
            return 
        if cnt==sum and root.left==None and root.right==None:
            flag[0]=True
            return
        if root.left!=None:
            self.dfs(root.left,sum,cnt+root.left.val,flag)
        if root.right!=None:
            self.dfs(root.right,sum,cnt+root.right.val,flag)
    # @param root, a tree node
    # @param sum, an integer
    # @return a boolean
    def hasPathSum(self, root, sum):
        flag=[]
        flag.append(False)
        if root==None:
            return False
        self.dfs(root,sum,root.val,flag)
        return flag[0]
 