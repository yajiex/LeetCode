
class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ndividend=abs((long long)dividend);
        long long ndivisor=abs((long long)divisor);
        long long ans=0;
        while(ndividend>=ndivisor)
        {
            long long temp=ndivisor;
            for(int i=0;ndividend>=temp;i++,temp<<=1)
            {
                ndividend-=temp;
                ans+=1<<i;
            }
        }
        if(dividend>0 && divisor>0 || dividend<0 && divisor<0)
            return ans;
        else
            return -ans;
    }
};


 