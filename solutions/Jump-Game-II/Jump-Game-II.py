

class Solution:
    # @param A, a list of integers
    # @return an integer
    def jump(self, A):
        n=len(A)
        if n==1:
            return 0
        maxdis=0
        ans=0
        while True:
            ans+=1
            for i in range(maxdis+1):
                maxdis=max(maxdis,A[i]+i)
                if maxdis>=n-1:
                    return ans
 