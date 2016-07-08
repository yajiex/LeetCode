
class Solution:
    # @param A, a list of integers
    # @return a boolean
    def canJump(self, A):
        ans=0
        for i in range(len(A)):
            if ans<i:
                return False
            ans=max(ans,i+A[i])
            if ans>=len(A)-1:
                return True
        return ans>=len(A)-1
 