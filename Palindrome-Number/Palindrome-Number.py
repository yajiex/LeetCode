

class Solution:
    # @return a boolean
    def isPalindrome(self, x):
        if x<0:
            return False
        y=x
        ans=0
        while x:
            temp=x%10
            ans=ans*10+temp
            x/=10
        if ans==y:
            return True
        else:
            return False
 