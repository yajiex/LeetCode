class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        if(matrix.size() == 0)
        {
            return 0;
        }
        
        int ans = 0;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), 0));
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                ans = max(dfs(matrix, i, j, INT_MIN, dp), ans);
            }
        }
        
        return ans;
    }
    
private:
    int dfs(vector<vector<int>>& matrix, int x, int y, int current, vector<vector<int>>& dp)
    {
        if(x<0 || x>=matrix.size() || y<0 || y>=matrix[x].size())
        {
            return 0;
        }
        
        if(matrix[x][y] <= current)
        {
            return 0;
        }
        
        if(dp[x][y] != 0)
        {
            return dp[x][y];
        }
            
        int ans1 = dfs(matrix, x+1, y, matrix[x][y], dp) + 1;
        int ans2 = dfs(matrix, x-1, y, matrix[x][y], dp) + 1;
        int ans3 = dfs(matrix, x, y+1, matrix[x][y], dp) + 1;
        int ans4 = dfs(matrix, x, y-1, matrix[x][y], dp) + 1;
        dp[x][y] = max(ans1, max(ans2, max(ans3, ans4)));
        return dp[x][y];
    }
};