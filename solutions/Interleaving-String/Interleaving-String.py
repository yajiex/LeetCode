

class Solution:
    # @return a boolean
    def isInterleave(self, s1, s2, s3):
        len1=len(s1)
        len2=len(s2)
        len3=len(s3)
        if len1+len2!=len3:
            return False
        dp=[[False for x in range(len2+1)] for y in range(len1+1)]
        dp[0][0]=True
        for i in range(len1+1):
            for j in range(len2+1):
                pos=i+j
                if i>=1 and s1[i-1]==s3[pos-1]:
                    dp[i][j]=dp[i][j] or dp[i-1][j]
                if j>=1 and s2[j-1]==s3[pos-1]:
                    dp[i][j]=dp[i][j] or dp[i][j-1]
        return dp[len1][len2]
 