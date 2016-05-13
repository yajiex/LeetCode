
class Solution:
    def dfs(self,lpos,rpos,n,ans,str):
        if rpos>lpos or lpos>n and rpos>n:
            return 
        if lpos==n and rpos==n:
            ans.append(str)
            return 
        if lpos<n:
            temp=str[:]
            temp+='('
            self.dfs(lpos+1,rpos,n,ans,temp)
        if rpos<n:
            temp=str[:]
            temp+=')'
            self.dfs(lpos,rpos+1,n,ans,temp)
    # @param an integer
    # @return a list of string
    def generateParenthesis(self, n):
        ans=[]
        str=""
        self.dfs(0,0,n,ans,str)
        return ans
 