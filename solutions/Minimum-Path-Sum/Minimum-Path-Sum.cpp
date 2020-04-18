
// class Solution {
// public:
//     int minPathSum(vector<vector<int> > &grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<int>dp(m+1,INT_MAX);
//         dp[1]=0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 dp[j+1]=min(dp[j],dp[j+1])+grid[i][j];
//             }
//         }
//         return dp[m];
//     }
// };

// 2019-07-21
// O(nm)
// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         int n = grid.size();
//         if(n==0)
//         {
//             return 0;
//         }
//         int m = grid[0].size();
//         if(m==0)
//         {
//             return 0;
//         }
//         vector<vector<int>> dp = vector<vector<int>>(n+1, vector<int>(m+1, INT_MAX));
        
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 dp[i][j] = ((i==1 && j==1) ? 0 : min(dp[i-1][j], dp[i][j-1])) + grid[i-1][j-1];
//             }
//         }
//         return dp[n][m];
//     }
// };

// 2020-04-18
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        if(n==0)
        {
            return 0;
        }
        int m = grid[0].size();
        if(m==0)
        {
            return 0;
        }
        vector<vector<int>> dp = vector<vector<int>>(n+1, vector<int>(m+1, INT_MAX));
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                dp[i][j] = ((i==1 && j==1) ? 0 : min(dp[i-1][j], dp[i][j-1])) + grid[i-1][j-1];
            }
        }
        return dp[n][m];
    }
};