

class Solution:
    # @param A a list of integers
    # @param target an integer
    # @return a boolean
    def search(self, A, target):
        for i in range(len(A)):
            if A[i]==target:
                return True
        return False
 