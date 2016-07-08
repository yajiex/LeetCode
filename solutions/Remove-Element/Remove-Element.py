

class Solution:
    # @param    A       a list of integers
    # @param    elem    an integer, value need to be removed
    # @return an integer
    def removeElement(self, A, elem):
        n=len(A)
        i=0
        while i!=n:
            if A[i]==elem:
                A[i],A[n-1]=A[n-1],A[i]
                i=i-1
                n=n-1
            i=i+1
        return n
        
 