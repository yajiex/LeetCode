

class Solution:
    def dfs(self,pos,k,n,start,ans,vec):
        if pos==k:
            temp=vec[:]
            ans.append(temp)
            return 
        for i in range(start,n+1):
            vec[pos]=i
            self.dfs(pos+1,k,n,i+1,ans,vec)
    # @return a list of lists of integers
    def combine(self, n, k):
        ans=[]
        vec=[0 for i in range(k)]
        self.dfs(0,k,n,1,ans,vec)
        return ans
        
 