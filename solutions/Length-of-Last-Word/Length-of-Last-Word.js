/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function (s) {
  const n = s.length;
  let ans = 0;
  for (let i = 0; i < n; i++) {
    if (s[i] !== ' ') {
      ans++;
    } else if (i + 1 < n && s[i + 1] !== ' ') {
      ans = 0;
    }
  }
  return ans;
};