/**
 * @param {number} n
 * @return {number}
 */
var climbStairs = function (n) {
  if (n === 0 || n === 1) {
    return n;
  }
  let allLast1 = 1;
  let allLast2 = 1;
  let all = 0;
  for (let i = 2; i <= n; i++) {
    all = allLast1 + allLast2;
    allLast2 = allLast1;
    allLast1 = all;
  }
  return all;
};