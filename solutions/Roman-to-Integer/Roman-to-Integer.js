/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
  const length = s.length;
  let ans = 0;
  for (let i = length - 1; i >= 0; i--) {
    switch (s[i]) {
      case 'I':
        ans += (ans >= 5 ? -1 : 1);
        break;
      case 'V':
        ans += 5;
        break;
      case 'X':
        ans += (ans >= 50 ? -10 : 10);
        break;
      case 'L':
        ans += 50;
        break;
      case 'C':
        ans += (ans >= 500 ? -100 : 100);
        break;
      case 'D':
        ans += 500;
        break;
      case 'M':
        ans += 1000;
        break;
      default:
        break;
    }
  }
  return ans;
};