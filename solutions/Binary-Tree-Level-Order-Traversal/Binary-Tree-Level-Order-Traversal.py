
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
    # @return a list of lists of integers
    def levelOrder(self, root):
        ans=[]
        q=[]
        if root==None:
            return ans
        vec=[]
        vec.append(root)
        q.append(vec)
        while len(q):
            vec=q.pop()
            temp=[]
            temp2=[]
            for i in range(len(vec)):
                temp.append(vec[i].val)
                if vec[i].left!=None:
                    temp2.append(vec[i].left)
                if vec[i].right!=None:
                    temp2.append(vec[i].right)
            if len(temp2):
                q.append(temp2)
            if len(temp):
                ans.append(temp)
        return ans
 