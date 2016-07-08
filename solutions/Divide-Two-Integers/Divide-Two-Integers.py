

class Solution:
    # @return an integer
    def divide(self, dividend, divisor):
        if dividend==0 or divisor==0:
            return 0
        flag=0
        if dividend>0 and divisor<0 or dividend<0 and divisor>0:
            flag=1
        c=dividend
        d=divisor
        a=abs(c)
        b=abs(d)
        if b>a:
            return 0
        sum=0
        cnt=0
        ans=0
        while b<=a:
            cnt=1
            sum=b
            while sum+sum<=a:
                sum+=sum
                cnt+=cnt
            a-=sum
            ans+=cnt
        if flag:
            ans=-ans
        return ans
 