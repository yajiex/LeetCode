

class Solution:
    # @return an integer
    def romanToInt(self, s):
        dic={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        last=dic[s[0]]
        ans=0
        for i in range(1,len(s)):
            if dic[s[i]]>last:
                ans-=last
            else:
                ans+=last
            last=dic[s[i]]
        ans+=last
        return ans
 