

class Solution:
    # @param A, a list of integers
    # @return an integer
    def maxSubArray(self, A):
        tempans=A[0]
        ans=A[0]
        for i in range(1,len(A)):
            if tempans>0:
                tempans+=A[i]
            else:
                tempans=A[i]
            ans=max(ans,tempans)
        return ans
 