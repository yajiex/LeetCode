/**
 * @param {string} s
 * @return {number}
 */
var titleToNumber = function (s) {
  return Array.prototype.reduce.call(s, (prev, cur) => {
    return prev * 26 + (cur.charCodeAt(0) - 65 + 1);
  }, 0);
};