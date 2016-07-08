
class Solution {
public:
    int check1(char ch)
    {
        return ch=='0'?0:1;
    }
    int check2(char ch1,char ch2)
    {
        return (ch1=='1' || (ch1=='2' && ch2<='6'))?1:0;
    }
    int numDecodings(string s) {
        int length=s.length();
        vector<int>dp(length,0);
        if(length==0)
        {
            return 0;
        }
        if(length==1)
        {
            return check1(s[0]);
        }
        dp[0]=check1(s[0]);
        dp[1]=(check1(s[0]) & check1(s[1])) + check2(s[0],s[1]);
        for(int i=2;i<length;i++)
        {
            if(check1(s[i]))
            {
                dp[i]+=dp[i-1];
            }
            if(check2(s[i-1],s[i]))
            {
                dp[i]+=dp[i-2];
            }
        }
        return dp[length-1];
    }
};


 