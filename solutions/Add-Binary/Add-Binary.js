/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function (a, b) {
  const n = a.length;
  const m = b.length;
  let ans = '';
  let flag = 0;
  const maxlen = Math.max(n, m);
  for (let i = 0; i < maxlen; i++) {
    const val1 = i < n ? a[n - i - 1] - '0' : 0;
    const val2 = i < m ? b[m - i - 1] - '0' : 0;
    const val = val1 + val2 + flag;
    flag = Math.floor(val / 2);
    ans = `${val % 2}${ans}`;
  }
  return flag ? `1${ans}` : ans;
};