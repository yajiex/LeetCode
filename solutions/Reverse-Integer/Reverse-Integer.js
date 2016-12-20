/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
  let ans = 0;
  while (x !== 0) {
    ans = ans * 10 + x % 10;
    if (ans > Math.pow(2, 31)) {
      return 0;
    }
    if (ans < -Math.pow(2, 31)) {
      return 0;
    }
    x = x >= 0 ? Math.floor(x / 10) : Math.ceil(x / 10);
  }
  return ans;
};