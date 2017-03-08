/**
 * @param {number[][]} obstacleGrid
 * @return {number}
 */
var uniquePathsWithObstacles = function (obstacleGrid) {
  const n = obstacleGrid.length;
  if (n === 0) {
    return 0;
  }
  const m = obstacleGrid[0].length;
  const dp = Array.from({ length: m }, () => 0);
  dp[0] = 1;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < m; j++) {
      if (obstacleGrid[i][j] === 1) {
        dp[j] = 0;
      } else if (j > 0) {
        dp[j] += dp[j - 1];
      }
    }
  }
  return dp[m - 1];
};