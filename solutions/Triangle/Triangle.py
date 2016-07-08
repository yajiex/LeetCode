

class Solution:
    # @param triangle, a list of lists of integers
    # @return an integer
    def minimumTotal(self, triangle):
        n=len(triangle)
        dp=[[0 for i in range(n+1)] for j in range(n+1)]
        for i in range(n-1,-1,-1):
            for j in range(0,i+1):
                dp[i][j]=min(dp[i+1][j],dp[i+1][j+1])+triangle[i][j]
        return dp[0][0]
        
 