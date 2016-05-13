

class Solution:
    # @param s, a string
    # @param dict, a set of string
    # @return a boolean
    def wordBreak(self, s, dict):
        n=s.__len__()
        dp = [False for x in range(n+1)]
        dp[0]=True
        for i in range(n):
            if dp[i]==True:
                for len in range(1,n+1-i):
                    if s[i:i+len] in dict:
                        dp[i+len]=True
        return dp[n]
        
 