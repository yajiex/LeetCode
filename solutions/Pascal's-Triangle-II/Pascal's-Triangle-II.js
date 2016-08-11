/**
 * @param {number} rowIndex
 * @return {number[]}
 */
var getRow = function (rowIndex) {
  const ans = [1];
  for (let i = 1; i <= rowIndex; i++) {
    ans[i] = 0;
  }
  for (let i = 1; i <= rowIndex; i++) {
    for (let j = i; j >= 1; j--) {
      ans[j] += ans[j - 1];
    }
  }
  return ans;
};