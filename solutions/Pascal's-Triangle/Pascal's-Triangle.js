/**
 * @param {number} numRows
 * @return {number[][]}
 */
var generate = function (numRows) {
  const ans = [];
  ans.fill([], 0, numRows - 1);
  for (let i = 0; i < numRows; i++) {
    for (let j = 0; j <= i; j++) {
      if (j === 0 || j === i) {
        if (typeof ans[i] === 'undefined') {
          ans.push([]);
        }
        ans[i].push(1);
      } else {
        ans[i].push(ans[i - 1][j] + ans[i - 1][j - 1]);
      }
    }
  }
  return ans;
};