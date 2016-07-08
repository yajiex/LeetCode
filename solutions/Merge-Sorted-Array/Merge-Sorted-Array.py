

class Solution:
    # @param A  a list of integers
    # @param m  an integer, length of A
    # @param B  a list of integers
    # @param n  an integer, length of B
    # @return nothing
    def merge(self, A, m, B, n):
        C=A[:]
        posA=0
        posB=0
        while posA<m and posB<n:
            if C[posA]<B[posB]:
                A[posA+posB]=C[posA]
                posA+=1
            else:
                A[posA+posB]=B[posB]
                posB+=1
        while posA<m:
            A[posA+posB]=C[posA]
            posA+=1
        while posB<n:
            A[posA+posB]=B[posB]
            posB+=1
 