

class Solution:
    # @param n, an integer
    # @return an integer
    def climbStairs(self, n):
        dp=range(0,1000)
        dp[1]=1
        dp[2]=2
        for i in range(3,n+1):
            dp[i]=dp[i-1]+dp[i-2]
        return dp[n]
 