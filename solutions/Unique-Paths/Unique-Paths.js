/**
 * @param {number} m
 * @param {number} n
 * @return {number}
 */
var uniquePaths = function (m, n) {
  if (m > n) {
    return uniquePaths(n, m);
  }
  const dp = Array.from({ length: m }, () => 1);
  for (let j = 1; j < n; j++) {
    for (let i = 1; i < m; i++) {
      dp[i] += dp[i - 1];
    }
  }
  return dp[m - 1];
};