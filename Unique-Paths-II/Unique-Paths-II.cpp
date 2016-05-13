
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        int *dp=new int[max(n,m)+1];
        dp[0]=!obstacleGrid[0][0];
        for(int i=1;i<m;i++)
            if(dp[i-1]==0 || obstacleGrid[0][i]==1)
                dp[i]=0;
            else
                dp[i]=dp[i-1];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(obstacleGrid[i][j]==0)
                {
                    if(j>0)
                        dp[j]=dp[j-1]+dp[j];
                }
                else
                    dp[j]=0;
            }
        }
        return dp[m-1];
    }
};


 