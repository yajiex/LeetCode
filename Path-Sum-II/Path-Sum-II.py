
‘’’
 Definition for a  binary tree node
 class TreeNode:
     def __init__(self, x):
         self.val = x
         self.left = None
         self.right = None
‘’’
class Solution:
    def dfs(self,root,sum,cnt,vec,ans):
        if sum==cnt and root.left==None and root.right==None:
            vec2=vec[:]
            ans.append(vec2)
            return
        if root.left!=None:
            vec.append(root.left.val)
            self.dfs(root.left,sum,cnt+root.left.val,vec,ans)
            vec.pop()
        if root.right!=None:
            vec.append(root.right.val)
            self.dfs(root.right,sum,cnt+root.right.val,vec,ans)
            vec.pop()
    # @param root, a tree node
    # @param sum, an integer
    # @return a list of lists of integers
    def pathSum(self, root, sum):
        ans=[]
        vec=[]
        if root==None:
            return ans
        vec.append(root.val)
        self.dfs(root,sum,root.val,vec,ans)
        return ans
        
 