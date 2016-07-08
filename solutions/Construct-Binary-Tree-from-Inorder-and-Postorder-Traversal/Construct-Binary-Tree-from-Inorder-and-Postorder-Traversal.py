
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def buildTreeRecursive(self,inorder,inl,inr,postorder,postl,postr):
        if inl>inr:
            return None
        val=postorder[postr]
        index=0
        for i in range(inl,inr+1):
            if inorder[i]==val:
                index=i
                break
        len=index-inl
        root=TreeNode(val)
        root.left=self.buildTreeRecursive(inorder,inl,index-1,postorder,postl,postl+len-1)
        root.right=self.buildTreeRecursive(inorder,index+1,inr,postorder,postl+len,postr-1)
        return root
    # @param inorder, a list of integers
    # @param postorder, a list of integers
    # @return a tree node
    def buildTree(self, inorder, postorder):
        if len(inorder)==0:
            return None
        return self.buildTreeRecursive(inorder,0,len(inorder)-1,postorder,0,len(postorder)-1)
 