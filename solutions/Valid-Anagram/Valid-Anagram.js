/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  const ans = [];
  for (let i = 0; i < 26; i++) {
    ans[i] = 0;
  }
  for (let i = 0; i < s.length; i++) {
    ans[s[i].charCodeAt(0) - 97]++;
  }
  for (let i = 0; i < t.length; i++) {
    ans[t[i].charCodeAt(0) - 97]--;
  }
  for (let i = 0; i < 26; i++) {
    if (ans[i] !== 0) {
      return false;
    }
  }
  return true;
};