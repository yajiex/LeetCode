
class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>dp(m+1,INT_MAX);
        dp[1]=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[j+1]=min(dp[j],dp[j+1])+grid[i][j];
            }
        }
        return dp[m];
    }
};


 