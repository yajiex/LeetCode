

class Solution:
    # @return a list of lists of integers
    def generate(self, numRows):
        ans=[[] for i in range(numRows)]
        for i in range(numRows):
            for j in range(i+1):
                if j==0 or j==i:
                    ans[i].append(1)
                else:
                    ans[i].append(ans[i-1][j]+ans[i-1][j-1])
        return ans
 