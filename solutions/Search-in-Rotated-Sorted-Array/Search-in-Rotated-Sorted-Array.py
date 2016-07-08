

class Solution:
    # @param A, a list of integers
    # @param target, an integer to be searched
    # @return an integer
    def search(self, A, target):
        for i in range(len(A)):
            if A[i]==target:
                return i
        return -1
 