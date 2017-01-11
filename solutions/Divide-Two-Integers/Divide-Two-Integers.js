/**
 * @param {number} dividend
 * @param {number} divisor
 * @return {number}
 */
var divide = function (dividend, divisor) {
  if (!divisor || (divisor === -1 && dividend === -2147483648)) {
    return 2147483647;
  }
  const sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
  let dvd = Math.abs(dividend);
  let dvs = Math.abs(divisor);
  let ans = 0;
  while (dvd >= dvs) {
    let temp = dvs;
    let multiple = 1;
    while (((temp << 1) > 0) && (dvd >= (temp << 1))) {
      temp <<= 1;
      multiple <<= 1;
    }
    dvd -= temp;
    ans += multiple;
  }
  return sign === 1 ? ans : -ans;
};