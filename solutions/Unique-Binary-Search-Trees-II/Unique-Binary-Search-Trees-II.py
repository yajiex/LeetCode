
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def buildTree(self,l,r):
        ans=[]
        if l>r:
            ans.append(None)
            return ans
        for i in range(l,r+1):
            left=self.buildTree(l,i-1)
            right=self.buildTree(i+1,r)
            for j in range(0,len(left)):
                for k in range(0,len(right)):
                    root=TreeNode(i+1)
                    ans.append(root)
                    root.left=left[j]
                    root.right=right[k]
        return ans
    # @return a list of tree node
    def generateTrees(self, n):
        return self.buildTree(0,n-1)
 