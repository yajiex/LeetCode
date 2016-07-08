

class Solution:
    # @return a float
    def findMedianSortedArrays(self, A, B):
        m=len(A)
        n=len(B)
        total=n+m
        if total%2==1:
            return self.findKth(A,m,B,n,total/2+1)
        else:
            return (self.findKth(A,m,B,n,total/2) + self.findKth(A,m,B,n,total/2+1))/2.0
    def findKth(self,A,m,B,n,k):
        if m>n:
            return self.findKth(B,n,A,m,k)
        if m==0:
            return B[k-1]
        if k==1:
            return min(A[0],B[0])
        pa=min(k/2,m)
        pb=k-pa
        if A[pa-1]<B[pb-1]:
            return self.findKth(A[pa:],m-pa,B,n,k-pa)
        elif A[pa-1]>B[pb-1]:
            return self.findKth(A,m,B[pb:],n-pb,k-pb)
        else:
            return A[pa-1]
 