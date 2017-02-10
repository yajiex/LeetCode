/**
 * @param {string} s
 * @param {string} p
 * @return {boolean}
 */
var isMatch = function (s, p) {
  const n = s.length;
  const m = p.length;
  let star = -1;
  let prev = -1;
  let j = 0;
  for (let i = 0; i < n;) {
    if (s[i] === p[j] || p[j] === '?') {
      i++;
      j++;
      continue;
    }
    if (p[j] === '*') {
      star = j;
      j++;
      prev = i;
      continue;
    }
    if (star !== -1) {
      j = star + 1;
      i = prev + 1;
      prev++;
      continue;
    }
    return false;
  }
  while (p[j] === '*') {
    j++;
  }
  return j === m;
};