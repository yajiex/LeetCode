/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function (s) {
  const charIndex = Array.from({ length: 256 }, () => -1);
  const length = s.length;
  let start = 0;
  let ans = 0;
  for (let i = 0; i < length; i++) {
    const charCode = s[i].charCodeAt(0);
    start = Math.max(charIndex[charCode] + 1, start);
    charIndex[charCode] = i;
    ans = Math.max(ans, i - start + 1);
  }
  return ans;
};