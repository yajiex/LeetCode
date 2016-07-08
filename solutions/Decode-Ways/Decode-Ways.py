

class Solution:
    # @param s, a string
    # @return an integer
    def numDecodings(self, s):
        length=len(s)
        dp=[0 for x in range(length)]
        if length==0:
            return 0
        if length==1:
            return self.check1(s[0])
        dp[0]=self.check1(s[0])
        dp[1]=(self.check1(s[0]) & self.check1(s[1])) + self.check2(s[0],s[1])
        for i in range(2,length):
            if self.check1(s[i]):
                dp[i]+=dp[i-1]
            if self.check2(s[i-1],s[i]):
                dp[i]+=dp[i-2]
        return dp[length-1]
    def check1(self,ch):
        return 0 if ch=='0' else 1
    def check2(self,ch1,ch2):
        return 1 if (ch1=='1' or ch1=='2' and ch2<='6') else 0
 