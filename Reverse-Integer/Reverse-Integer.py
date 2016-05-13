
class Solution:
    # @return an integer
    def reverse(self, x):
        flag=False
        if x==0:
            return x
        elif x<0:
            flag=True
            x=-x
        ans=0
        while x:
            ans=ans*10+x%10
            x/=10
        if flag:
            return -ans
        else:
            return ans        
 