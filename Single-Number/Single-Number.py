
class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        ans=0
        for index in range(len(A)):
            ans^=A[index]
        return ans

 