

# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    # @param root, a tree node
    # @return a tree node
    def recoverTree(self, root):
        self.pre = None
        self.first = None
        self.second = None
        self.inorder(root)
        if self.first!=None and self.second!=None:
            self.first.val, self.second.val = self.second.val, self.first.val
        return root
    def inorder(self,root):
        if root==None:
            return
        
        self.inorder(root.left)
        if self.pre!=None and self.pre.val>root.val:
            if self.first==None:
                self.first = self.pre
                self.second = root
            else:
                self.second = root
        self.pre = root
        self.inorder(root.right)
 