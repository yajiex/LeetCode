
class Solution:
    # @param A, a list of integer
    # @return an integer
    def singleNumber(self, A):
        ones=0
        twos=0
        threes=0
        for i in range(len(A)):
            threes=twos & A[i]
            twos = twos | ones & A[i]
            ones = ones | A[i]
            twos= twos & ~threes
            ones =ones & ~threes
        return ones
 