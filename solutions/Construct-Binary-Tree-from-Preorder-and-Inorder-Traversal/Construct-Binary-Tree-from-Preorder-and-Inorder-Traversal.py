
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def buildTreeRecursive(self,preorder,prel,prer,inorder,inl,inr):
        if prel>prer:
            return None
        val=preorder[prel]
        index=0
        for i in range(inl,inr+1):
            if inorder[i]==val:
                index=i
                break
        len=index-inl
        root=TreeNode(val)
        root.left=self.buildTreeRecursive(preorder,prel+1,prel+len,inorder,inl,index-1)
        root.right=self.buildTreeRecursive(preorder,prel+len+1,prer,inorder,index+1,inr)
        return root
    # @param preorder, a list of integers
    # @param inorder, a list of integers
    # @return a tree node
    def buildTree(self, preorder, inorder):
        if len(preorder)==0:
            return None
        return self.buildTreeRecursive(preorder,0,len(preorder)-1,inorder,0,len(inorder)-1)
 