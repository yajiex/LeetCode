/**
 * @param {number} n
 * @return {number}
 */
var totalNQueens = function (n) {
  const visit = Array.from({ length: n }, () => 0);
  let ans = 0;
  const ok = (endRow) => {
    for (let row = 0; row < endRow; row++) {
      if (visit[row] === visit[endRow] || Math.abs(visit[row] - visit[endRow]) === endRow - row) {
        return false;
      }
    }
    return true;
  };
  const dfs = (row) => {
    if (row === n) {
      ans++;
      return;
    }
    for (let col = 0; col < n; col++) {
      visit[row] = col;
      if (ok(row)) {
        dfs(row + 1);
      }
    }
  };
  dfs(0);
  return ans;
};