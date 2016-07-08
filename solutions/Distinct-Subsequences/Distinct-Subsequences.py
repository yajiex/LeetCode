
class Solution:
    # @return an integer
    def numDistinct(self, S, T):
        len1=len(S)
        len2=len(T)
        dp=[[0 for i in range(len2+1)] for j in range(len1+1)]
        for i in range(len1+1):
            dp[i][0]=1
        for i in range(1,len2+1):
            dp[0][i]=0
        for j in range(1,len2+1):
            for i in range(1,len1+1):
                if S[i-1]==T[j-1]:
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j]
                else:
                    dp[i][j]=dp[i-1][j]
        return dp[len1][len2]
 