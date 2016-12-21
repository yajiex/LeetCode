/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function (str) {
  let sign = 1;
  let base = 0;
  const charCode0 = '0'.charCodeAt(0);
  const charCode9 = '9'.charCodeAt(0);
  const INT_MAX = 2147483647;
  const INT_MIN = -2147483648;
  const length = str.length;
  for (let i = 0; i < length;) {
    while (str[i] === ' ') {
      i++;
    }
    if (str[i] === '-' || str[i] === '+') {
      sign = str[i++] === '-' ? -1 : 1;
    }
    while (i < length) {
      const charCode = str[i++].charCodeAt(0);
      if (charCode >= charCode0 && charCode <= charCode9) {
        if (base > Math.floor(INT_MAX / 10) || (base === Math.floor(INT_MAX / 10) && (charCode - charCode0) > INT_MAX % 10)) {
          return sign > 0 ? INT_MAX : INT_MIN;
        }
        base = 10 * base + (charCode - charCode0);
      } else {
        break;
      }
    }
    return base * sign;
  }
  return 0;
};