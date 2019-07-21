
// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//         n-=1;
//         m-=1;
//         int dp[205][105];
//         for(int i=0;i<=m+n;i++)
//         {
//             dp[i][0]=1;
//         }
//         for(int i=1;i<=m+n;i++)
//         {
//             for(int j=1;j<=i;j++)
//             {
//                 dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
//             }
//         }
//         return dp[m+n][m];
//     }
// };

// 2019-07-21
// O(mn)
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp = vector<vector<int>>(m+1, vector<int>(n+1, 0));
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                dp[i][j] = (i == 1 && j == 1) ? 1 : dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m][n];
    }
};
 