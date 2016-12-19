/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function (s, numRows) {
  const length = s.length;
  const arr = Array.from({ length: numRows }, () => '');
  for (let i = 0; i < length;) {
    for (let j = 0; j < numRows && i < length; j++) {
      arr[j] += s[i++];
    }
    for (let j = numRows - 2; j > 0 && i < length; j--) {
      arr[j] += s[i++];
    }
  }
  return arr.reduce((x, y) => x + y);
};