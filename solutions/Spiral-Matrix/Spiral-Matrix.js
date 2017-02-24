/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function (matrix) {
  let ans = [];
  if (matrix.length === 0) {
    return ans;
  }
  ans = [...matrix[0]]; // no need to check the first row
  const dirs = [[1, 0], [0, -1], [-1, 0], [0, 1]]; // direction offsets
  let dirIndex = 0; // direction index
  let m = matrix.length;
  let n = matrix[0].length;
  const pos = [0, n - 1]; // start from the top right corner
  let num = (m - 1) * n; // number of the rest numbers
  while (num > 0) {
    for (let j = 1; j < m; j++) {
      num--;
      pos[0] += dirs[dirIndex][0];
      pos[1] += dirs[dirIndex][1];
      ans.push(matrix[pos[0]][pos[1]]);
    }
    m--; // decrease the size of row or column
    [m, n] = [n, m]; // switch between horizontal and vertical mode
    dirIndex = (dirIndex + 1) % dirs.length; // loop between direction offsets
  }
  return ans;
};