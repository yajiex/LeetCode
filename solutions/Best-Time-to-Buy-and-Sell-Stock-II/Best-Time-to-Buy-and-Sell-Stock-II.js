/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  const length = prices.length;
  let ans = 0;
  for (let i = 0; i < length; i++) {
    if (i > 0 && prices[i] > prices[i - 1]) {
      ans += prices[i] - prices[i - 1];
    }
  }
  return ans;
};