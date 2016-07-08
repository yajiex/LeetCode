

class Solution:
    # @param s, a string
    # @return an integer
    def longestValidParentheses(self, s):
        n=len(s)
        st=[0 for i in range(n)]
        top=0
        dp=[0 for i in range(n)]
        ans=0
        for i in range(n):
            if s[i]=='(':
                st[top]=i
                top+=1
            else:
                if top==0:
                    continue
                top-=1
                pos=st[top]
                if pos==0:
                    dp[i]=i-pos+1
                else:
                    dp[i]=dp[pos-1]+i-pos+1
                ans=max(ans,dp[i])
        return ans
 