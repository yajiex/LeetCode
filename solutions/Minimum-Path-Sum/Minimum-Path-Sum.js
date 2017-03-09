/**
 * @param {number[][]} grid
 * @return {number}
 */
var minPathSum = function (grid) {
  const n = grid.length;
  const m = grid[0].length;
  const dp = Array.from({ length: m + 1 }, () => Number.MAX_SAFE_INTEGER);
  dp[1] = 0;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < m; j++) {
      dp[j + 1] = Math.min(dp[j], dp[j + 1]) + grid[i][j];
    }
  }
  return dp[m];
};