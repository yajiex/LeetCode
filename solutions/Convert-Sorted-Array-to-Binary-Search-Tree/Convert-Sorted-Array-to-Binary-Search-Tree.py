
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def addNode(self,l,r,num,visit):
        m=l+(r-l)/2
        if visit[m]:
            return None
        visit[m]=True
        tempnode=TreeNode(num[m])
        tempnode.left=self.addNode(l,m,num,visit)
        tempnode.right=self.addNode(m,r,num,visit)
        return tempnode
    # @param num, a list of integers
    # @return a tree node
    def sortedArrayToBST(self, num):
        if len(num)==0:
            return None
        n=len(num)
        visit=[False for i in range(n)]
        root=TreeNode(num[n/2])
        visit[n/2]=True
        root.left=self.addNode(0,n/2,num,visit)
        root.right=self.addNode(n/2,n,num,visit)
        return root
 