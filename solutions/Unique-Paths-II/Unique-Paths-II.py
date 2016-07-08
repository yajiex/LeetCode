

class Solution:
    # @param obstacleGrid, a list of lists of integers
    # @return an integer
    def uniquePathsWithObstacles(self, obstacleGrid):
        n=len(obstacleGrid)
        m=len(obstacleGrid[0])
        dp=[[0 for i in range(105)] for j in range(205)]
        if obstacleGrid[0][0]==1:
            dp[0][0]=0
        else:
            dp[0][0]=1
        for i in range(1,n):
            if obstacleGrid[i][0]==1:
                dp[i][0]=0
            else:
                dp[i][0]=dp[i-1][0]
        for j in range(1,m):
            if obstacleGrid[0][j]==1:
                dp[0][j]=0
            else:
                dp[0][j]=dp[0][j-1]
        for i in range(1,n):
            for j in range(1,m):
                if obstacleGrid[i][j]==1:
                    dp[i][j]=0
                else:
                    dp[i][j]=dp[i-1][j]+dp[i][j-1]
        return dp[n-1][m-1]
 