/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
  let hold1 = Number.NEGATIVE_INFINITY;
  let hold2 = Number.NEGATIVE_INFINITY;
  let release1 = 0;
  let release2 = 0;
  const length = prices.length;
  for (let i = 0; i < length; i++) {
    release2 = Math.max(release2, hold2 + prices[i]);
    hold2 = Math.max(hold2, release1 - prices[i]);
    release1 = Math.max(release1, hold1 + prices[i]);
    hold1 = Math.max(hold1, -prices[i]);
  }
  return release2;

};