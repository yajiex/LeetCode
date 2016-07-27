/**
 * @param {number} num
 * @return {boolean}
 */
var isUgly = function (num) {
  [2, 3, 5].forEach((prime) => {
    while (num !== 0 && num % prime === 0) {
      num /= prime;
    }
  });
  return num === 1;
};