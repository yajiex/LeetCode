/**
 * @param {number} n
 * @return {string[][]}
 */
var solveNQueens = function (n) {
  const visit = Array.from({ length: n }, () => 0);
  const ans = [];
  const ok = (endRow) => {
    for (let row = 0; row < endRow; row++) {
      if (visit[row] === visit[endRow] || Math.abs(visit[row] - visit[endRow]) === endRow - row) {
        return false;
      }
    }
    return true;
  }
  const dfs = (row) => {
    if (row === n) {
      const vec = [];
      for (let i = 0; i < n; i++) {
        let str = "";
        for (let j = 0; j < n; j++) {
          if (visit[i] === j) {
            str += 'Q';
          } else {
            str += '.';
          }
        }
        vec.push(str);
      }
      ans.push(vec);
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