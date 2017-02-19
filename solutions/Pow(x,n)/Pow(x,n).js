/**
 * @param {number} x
 * @param {number} n
 * @return {number}
 */
var myPow = function (x, n) {
  const INT_MAX = 2147483647;
  const INT_MIN = -2147483648;
  if (n === 0) {
    return 1;
  }
  if (n < 0) {
    if (n === INT_MIN) {
      return 1 / (myPow(x, INT_MAX) * x);
    } else {
      return 1 / myPow(x, -n);
    }
  }
  const temp = myPow(x, n >> 1);
  return n % 2 ? temp * temp * x : temp * temp;
};