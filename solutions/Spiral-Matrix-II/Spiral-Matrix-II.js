/**
 * @param {number} n
 * @return {number[][]}
 */
var generateMatrix = function (n) {
  const ans = Array.from({ length: n }, (v, i) => {
    if (i === 0) {
      return Array.from({ length: n }, (v, j) => j + 1);
    } else {
      return Array.from({ length: n }, () => 0);
    }
  });
  if (n === 0) {
    return ans;
  }
  const dirs = [[1, 0], [0, -1], [-1, 0], [0, 1]];
  let dirIndex = 0;
  const pos = [0, n - 1];
  let m = n;
  let num = (m - 1) * n;
  const sum = n * m;
  while (num > 0) {
    for (let i = 1; i < m; i++) {
      num--;
      pos[0] += dirs[dirIndex][0];
      pos[1] += dirs[dirIndex][1];
      ans[pos[0]][pos[1]] = sum - num;
    }
    m--;
    [n, m] = [m, n];
    dirIndex = (dirIndex + 1) % dirs.length;
  }
  return ans;
};