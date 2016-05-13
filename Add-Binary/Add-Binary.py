

class Solution:
    # @param a, a string
    # @param b, a string
    # @return a string
    def addBinary(self, a, b):
        len1=len(a)
        len2=len(b)
        p=len1-1
        q=len2-1
        sum=0
        add=0
        ans=""
        while p>=0 and q>=0:
            sum=int(a[p])-int('0')+int(b[q])-int('0')+add
            if sum>1:
                sum-=2
                add=1
            else:
                add=0
            ans+=str(sum+int('0'))
            p-=1
            q-=1
        while p>=0:
            sum=int(a[p])-int('0')+add
            if sum>1:
                sum-=2
                add=1
            else:
                add=0
            ans+=str(sum+int('0'))
            p-=1
        while q>=0:
            sum=int(b[q])-int('0')+add
            if sum>1:
                sum-=2
                add=1
            else:
                add=0
            ans+=str(sum+int('0'))
            q-=1
        if add:
            ans+='1'
        return ans[::-1]
 