
class Solution:
    # @param A a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        if len(A)==0:
            return 0
        pos=1
        num=1
        last=A[0]
        for i in range(1,len(A)):
            if A[i]!=last:
                A[pos]=A[i]
                pos+=1
                last=A[i]
                num=1
            elif num==2:
                continue
            else:
                num+=1
                A[pos]=last
                pos+=1
        return pos
 