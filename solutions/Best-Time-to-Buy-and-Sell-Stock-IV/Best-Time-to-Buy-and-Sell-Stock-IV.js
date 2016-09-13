/**
 * @param {number} k
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (k, prices) {
  const length = prices.length;
  if (k > Math.floor(length / 2)) {
    let ans = 0;
    for (let i = 1; i < length; i++) {
      ans += Math.max(prices[i] - prices[i - 1], 0);
    }
    return ans;
  }
  const release = Array.from({ length: k + 1 }, () => 0);
  const hold = Array.from({ length: k + 1 }, () => Number.NEGATIVE_INFINITY);
  for (let i = 0; i < length; i++) {
    const cur = prices[i];
    for (let j = k; j > 0; j--) {
      release[j] = Math.max(release[j], hold[j] + cur);
      hold[j] = Math.max(hold[j], release[j - 1] - cur);
    }
  }
  return release[k];
};