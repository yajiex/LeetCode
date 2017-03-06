/**
 * @param {number} n
 * @param {number} k
 * @return {string}
 */
var getPermutation = function (n, k) {
  let ans = '';
  const fac = Array.from({ length: n + 1 }, () => 1);
  for (let i = 1; i <= n; i++) {
    fac[i] = fac[i - 1] * i;
  }
  const nums = Array.from({ length: n }, (a, i) => i + 1);
  k--;

  for (let i = 1; i <= n; i++) {
    const index = Math.floor(k / fac[n - i]);
    ans += String.fromCharCode(nums[index] + '0'.charCodeAt(0));
    nums.splice(index, 1);
    k -= index * fac[n - i];
  }

  return ans;
};