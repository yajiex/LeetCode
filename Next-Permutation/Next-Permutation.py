

class Solution:
    # @param num, a list of integer
    # @return a list of integer
    def nextPermutation(self, num):
        n=len(num)
        mark=-1
        for i in range(n-1,0,-1):
            if num[i]<=num[i-1]:
                continue
            else:
                mark=i-1
                break
        if mark==-1:
            num.reverse()
            return num
        for i in range(n-1,mark,-1):
            if num[i]>num[mark]:
                mark2=i
                break
        num[mark],num[mark2]=num[mark2],num[mark]
        num2=num[mark+1:]
        num2.reverse()
        for i in range(mark+1,n):
            num[i]=num2[i-mark-1]
        return num
 