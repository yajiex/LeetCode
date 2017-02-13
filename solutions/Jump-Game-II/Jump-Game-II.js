/**
 * @param {number[]} nums
 * @return {number}
 */
var jump = function (nums) {
  const n = nums.length;
  let ans = 0;
  let right = 0;
  let last = 0;
  for (let i = 0; i < n; i++) {
    if (i > last) {
      last = right;
      ans++;
    }
    right = Math.max(right, i + nums[i]);
  }
  return ans;
};