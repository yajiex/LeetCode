/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function (s, p) {
    const m = s.length;
    const n = p.length;
    const dp = Array.from({length: m + 1}, (cur, i) => {
        return Array.from({length: n + 1}, (cur, j) => {
            return (i === 0 && j === 0) ? true : false;
        });
    });
    for (let j = 1; j <= n; j++) {
        dp[0][j] = j > 1 && '*' === p[j - 1] && dp[0][j - 2];
    }
    for (let i = 1; i <= m; i++) {
        for (let j = 1; j <= n; j++) {
            if (p[j - 1] !== '*') {
                dp[i][j] = dp[i - 1][j - 1] && (s[i - 1] === p[j - 1] || '.' === p[j - 1]);
            } else {
                dp[i][j] = dp[i][j - 2] || (s[i - 1] === p[j - 2] || '.' === p[j - 2]) && dp[i - 1][j];
            }
        }
    }
    return dp[m][n];
};