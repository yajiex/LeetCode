/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function (s, t) {
  const length = s.length;
  const sLast = Array.from({ length: 256 }, () => 0);
  const tLast = Array.from(sLast);
  for (let i = 0; i < length; i++) {
    if (sLast[s[i]] !== tLast[t[i]]) {
      return false;
    }
    sLast[s[i]] = i + 1;
    tLast[t[i]] = i + 1;
  }
  return true;
};