// 2019-07-28
// O(nm)
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n==0)
        {
            return 0;
        }
        int m = matrix[0].size();
        if(m==0)
        {
            return 0;
        }
        vector<vector<int>> dp = vector<vector<int>>(n+1, vector<int>(m+1, 0));
        int ans = 0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(matrix[i-1][j-1] == '1')
                {
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j])) + 1;
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans * ans;
    }
};