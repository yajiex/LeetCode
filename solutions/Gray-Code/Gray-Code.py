

class Solution:
    # @return a list of integers
    def grayCode(self, n):
        ans = [0]
        for i in range(n):
            left = len(ans)
            for j in range(len(ans)-1,-1,-1):
                ans.append(left | ans[j])
        return ans
 