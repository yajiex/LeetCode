
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.length();
        int m=s2.length();
        int len=s3.length();
        if(n+m!=len)
            return false;
        vector<vector<bool> >dp(n+1, vector<bool>(m+1,false));
        dp[0][0]=true;
        for(int i=0;i<=n;i++)
            for(int j=0;j<=m;j++)
            {
                int pos=i+j;
                if(i>=1 && s1[i-1]==s3[pos-1])
                {
                    dp[i][j]=dp[i][j]||dp[i-1][j];
                }
                if(j>=1 && s2[j-1]==s3[pos-1])
                {
                    dp[i][j]=dp[i][j]||dp[i][j-1];
                }
            }
        return dp[n][m];
    }
};


 