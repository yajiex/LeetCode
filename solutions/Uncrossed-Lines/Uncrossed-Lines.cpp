class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int m = B.size();
        vector<vector<int>> dp = vector<vector<int>>(n+1, vector<int>(m+1, 0));
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                dp[i][j] = A[i-1] == B[j-1] ? dp[i-1][j-1] + 1 : max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};