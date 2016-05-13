

class Solution:
    # @param x, a float
    # @param n, a integer
    # @return a float
    def pow(self, x, n):
        if n==0:
            return 1
        if n<0:
            if n==-2147483648:
                return 1.0/(self.pow(x,2147483647)*x)
            else:
                return 1.0/self.pow(x,-n)
        temp=self.pow(x,n/2)
        if n%2:
            return temp*temp*x
        else:
            return temp*temp
 