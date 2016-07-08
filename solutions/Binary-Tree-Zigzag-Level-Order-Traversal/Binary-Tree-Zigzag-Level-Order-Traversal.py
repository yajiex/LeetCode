
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
    def zigzagLevelOrder(self, root):
        ans=[]
        if root==None:
            return ans 
        q=[]
        s=[]
        
        
        s.append(root)
        q.append(s)
        flag=True
        while len(q):
            s=q.pop()
            temp=[]
            temp2=[]
            for i in range(len(s)):
                temp.append(s[i].val)
                if s[i].left!=None:
                    temp2.append(s[i].left)
                if s[i].right!=None:
                    temp2.append(s[i].right)
            if len(temp):
                if flag:
                    ans.append(temp)
                else:
                    temp.reverse()
                    ans.append(temp)
                if flag:
                    flag=False
                else:
                    flag=True
                q.append(temp2)
        return ans
 