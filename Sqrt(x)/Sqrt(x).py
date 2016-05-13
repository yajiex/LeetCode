

class Solution:
    # @param x, an integer
    # @return an integer
    def sqrt(self, x):
        if x==0:
            return 0
        pre=0
        cur = 1
        while abs(cur-pre)>1e-5:
            pre=cur
            cur=pre/2.0 + x/(2.0*pre)
        return int(cur)
 