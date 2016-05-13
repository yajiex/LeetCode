

class Solution:
    # @param A, a list of integers
    # @return an integer
    def firstMissingPositive(self, A):
        if len(A)==0:
            return 1
        hash=[0 for i in range(10000)]
        for i in range(len(A)):
            if A[i]>0:
                hash[A[i]]=1
        for i in range(1,10000):
            if hash[i]==0:
                return i
 