var cal = (n) => {
  let ans = 0;
  while (n !== 0) {
    const digit = n % 10;
    ans += digit * digit;
    n = Math.floor(n / 10);
  }
  return ans;
};

/**
 * @param {number} n
 * @return {boolean}
 */
var isHappy = function (n) {
  let slow = n;
  let fast = cal(cal(n));
  while (slow !== fast) {
    slow = cal(slow);
    fast = cal(cal(fast));
  }
  return slow === 1;
};