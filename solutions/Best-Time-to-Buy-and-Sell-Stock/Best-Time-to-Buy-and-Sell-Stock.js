/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  const length = prices.length;
  let lastMin = Number.MAX_VALUE;
  let ans = 0;
  for (let i = 0; i < length; i++) {
    if (prices[i] > lastMin) {
      ans = Math.max(ans, prices[i] - lastMin);
    } else {
      lastMin = Math.min(lastMin, prices[i]);
    }
  }
  return ans;
};