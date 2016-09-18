/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let sell = 0;
  let cool = 0;
  const length = prices.length;
  for (let i = 1; i < length; i++) {
    const temp = sell;
    sell = Math.max(cool, sell + prices[i] - prices[i - 1]);
    cool = Math.max(cool, temp);
  }
  return Math.max(sell, cool);
};