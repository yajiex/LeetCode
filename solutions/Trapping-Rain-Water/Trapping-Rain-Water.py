

class Solution:
    # @param A, a list of integers
    # @return an integer
    def trap(self, A):
        if len(A)==0:
            return 0
        maxh=-1
        mark=0
        for i in range(len(A)):
            if A[i]>maxh:
                maxh=A[i]
                mark=i
        ans=0
        maxl=A[0]
        maxr=A[len(A)-1]
        for i in range(mark):
            if A[i]>maxl:
                maxl=A[i]
            else:
                ans+=maxl-A[i]
        for i in range(len(A)-1,mark,-1):
            if A[i]>maxr:
                maxr=A[i]
            else:
                ans+=maxr-A[i]
        return ans
 