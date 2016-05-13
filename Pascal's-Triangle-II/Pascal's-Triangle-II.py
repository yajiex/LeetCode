

class Solution:
    # @return a list of integers
    def getRow(self, rowIndex):
        ans=[[] for i in range(rowIndex+1)]
        for i in range(rowIndex+1):
            for j in range(i,-1,-1):
                if j==0:
                    ans[j]=1
                elif j==i:
                    ans[j]=ans[j-1]
                else:
                    ans[j]=ans[j]+ans[j-1]
        return ans
 