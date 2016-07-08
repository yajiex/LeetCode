
class Solution:
    # @return a string
    def countAndSay(self, n):
        s="1"
        ans="1"
        for i in range(2,n+1):
            s=ans
            ans=""
            last=s[0]
            cnt=0
            for j in range(len(s)+1):
                if j==len(s) or s[j]!=last:
                    ans+=str(cnt)
                    ans+=last
                    cnt=1
                    if j!=len(s):
                        last=s[j]
                else:
                    cnt+=1
        return ans
 