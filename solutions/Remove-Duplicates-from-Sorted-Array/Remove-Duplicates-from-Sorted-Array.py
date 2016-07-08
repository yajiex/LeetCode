

class Solution:
    # @param a list of integers
    # @return an integer
    def removeDuplicates(self, A):
        if len(A)==0:
            return 0
        last=A[0]
        pos=0
        for i in range(len(A)):
            if last!=A[i]:
                A[pos]=last
                pos+=1
                last=A[i]
        A[pos]=last
        pos+=1
        return pos
 