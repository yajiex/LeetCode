

class Solution:
    # @return an integer
    def uniquePaths(self, m, n):
        dp=[[0 for i in range(105)] for j in range(205)]
        n-=1
        m-=1
        for i in range(m+n+1):
            dp[i][0]=1
        for i in range(1,m+n+1):
            for j in range(1,i+1):
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1]
        return dp[m+n][m]
 