

class Solution:
    # @param A a list of integers
    # @return nothing, sort in place
    def sortColors(self, A):
        p0=0
        p1=0
        p2=len(A)-1
        while p1<=p2:
            if A[p1]==0:
                A[p1],A[p0]=A[p0],A[p1]
                p0+=1
                p1+=1
            elif A[p1]==1:
                p1+=1
            else:
                A[p1],A[p2]=A[p2],A[p1]
                p2-=1
        
 