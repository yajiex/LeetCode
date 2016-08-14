/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function (x) {
  if (x < 0 || (x !== 0 && x % 10 === 0)) {
    return false;
  }
  let reversePart = 0;
  while (x > reversePart) {
    reversePart = reversePart * 10 + x % 10;
    x = Math.floor(x / 10);
  }
  return x === reversePart || x === Math.floor(reversePart / 10);
};