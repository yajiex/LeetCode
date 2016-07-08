

class Solution:
    def dfs(self,pos,vec,ans,s,dp):
        if pos==len(s):
            ans.append(vec)
            return 
        for i in range(pos,len(s)):
            if dp[pos][i]==True:
                self.dfs(i+1,vec[:]+[s[pos:i+1]],ans,s,dp)
                
    # @param s, a string
    # @return a list of lists of string
    def partition(self, s):
        ans=[]
        n=len(s)
        dp=[[False for i in range(n)] for j in range(n)]
        for i in range(n):
            for j in range(i,-1,-1):
                if s[i]==s[j] and (i-j<=1 or dp[j+1][i-1]==True):
                    dp[j][i]=True
        self.dfs(0,[],ans,s,dp)
        return ans
 