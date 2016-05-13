

class Solution:
    # @param s, a string
    # @return an integer
    def minCut(self, s):
        n=len(s)
        ok=[[False for i in range(n)] for j in range(n)]
        dp=[i+1 for i in range(n)]
        for j in range(n):
            for i in range(j,-1,-1):
                if s[i]==s[j] and (j-i<=1 or ok[i+1][j-1]==True):
                    ok[i][j]=True
                    if i:
                        dp[j]=min(dp[j],dp[i-1]+1)
                    else:
                        dp[j]=min(dp[j],1)
        return dp[n-1]-1
 