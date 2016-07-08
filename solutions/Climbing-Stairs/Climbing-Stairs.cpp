
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
            return 1;
        int a=1,b=1,ans=0;
        for(int i=2;i<=n;i++)
        {
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};


 