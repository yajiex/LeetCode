
class Solution:
    # @return an integer
    def numTrees(self, n):
        if n==0 or n==1:
            return 1
        elif n==2:
            return 2
        else:
            ans=0
            for i in range(n):
                ans+=self.numTrees(i)*self.numTrees(n-1-i)
            return ans
                
 