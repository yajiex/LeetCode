/**
 * @param {number[]} nums
 * @return {boolean}
 */
var canJump = function (nums) {
  let ans = 0;
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    if (i > ans) {
      return false;
    }
    ans = Math.max(ans, i + nums[i]);
    if (ans >= n - 1) {
      return true;
    }
  }
  return ans >= n - 1;
};