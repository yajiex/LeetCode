

class Solution:
    # @return a string
    def convert(self, s, nRows):
        if nRows == 1:
            return s
        ans = ["" for x in range(nRows)]
        i = 0
        while i < len(s):
            j = 0
            while j < nRows and i < len(s):
                ans[j] += s[i]
                i = i + 1
                j = j + 1
            j = nRows - 2 
            while j > 0 and i < len(s):
                ans[j] += s[i]
                i = i + 1
                j = j - 1
        ansstr = ""
        for i in range(nRows):
            ansstr+=ans[i]
        return ansstr
 