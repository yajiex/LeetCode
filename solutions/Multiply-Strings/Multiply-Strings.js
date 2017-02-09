/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var multiply = function (num1, num2) {
  const n = num1.length;
  const m = num2.length;
  const sum = Array.from({ length: n + m }, x => '0');
  for (let i = n - 1; i >= 0; i--) {
    let carry = 0;
    for (let j = m - 1; j >= 0; j--) {
      const temp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
      sum[i + j + 1] = String.fromCharCode(temp % 10 + '0'.charCodeAt(0));
      carry = Math.floor(temp / 10);
    }
    sum[i] = String.fromCharCode(carry + sum[i].charCodeAt(0));
  }
  const start = sum.findIndex(x => x !== '0');
  return start === -1 ? '0' : sum.slice(start).join('');
};