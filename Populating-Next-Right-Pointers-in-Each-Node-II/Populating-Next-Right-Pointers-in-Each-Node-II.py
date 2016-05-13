

# Definition for a  binary tree node
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None
#         self.next = None

class Solution:
    # @param root, a tree node
    # @return nothing
    def connect(self, root):
        if root==None:
            return
        if root.left!=None:
            root.left.next = root.right
            if root.right==None:
                node = root.next
                while node!=None and root.left.next==None:
                    root.left.next = node.left
                    if node.left==None:
                        root.left.next = node.right
                    node = node.next
        if root.right!=None:
            node = root.next
            while node!=None and root.right.next==None:
                root.right.next = node.left
                if node.left==None:
                    root.right.next = node.right
                node = node.next
        self.connect(root.right)
        self.connect(root.left)
 