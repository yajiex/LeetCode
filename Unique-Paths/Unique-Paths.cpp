
class Solution {
public:
    int uniquePaths(int m, int n) {
        n-=1;
        m-=1;
        int dp[205][105];
        for(int i=0;i<=m+n;i++)
        {
            dp[i][0]=1;
        }
        for(int i=1;i<=m+n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }
        return dp[m+n][m];
    }
};


 