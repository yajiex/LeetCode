

class Solution:
    # @param A, a list of integers
    # @param target, an integer to be searched
    # @return a list of length 2, [index1, index2]
    def searchRange(self, A, target):
        ans=[]
        n=len(A)-1
        ansl=-1
        ansr=-1
        if A==None:
            ans.append(ansl)
            ans.append(ansr)
            return ans
        l=0
        r=n
        while l<=r:
            m=l+(r-l)/2
            if A[m]==target:
                if m==0:
                    ansl=0
                    break
                elif A[m]==A[m-1]:
                    l=0
                    r=m-1
                else:
                    ansl=m
                    break
            elif A[m]<target:
                l=m+1
            else:
                r=m-1
        ans.append(ansl)
        
        l=0
        r=n
        while l<=r:
            m=l+(r-l)/2
            if A[m]==target:
                if m==n:
                    ansr=n
                    break
                elif A[m]==A[m+1]:
                    l=m+1
                    r=n
                else:
                    ansr=m
                    break
            elif A[m]<target:
                l=m+1
            else:
                r=m-1
        ans.append(ansr)
        return ans
 