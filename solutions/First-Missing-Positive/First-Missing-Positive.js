/**
 * @param {number[]} nums
 * @return {number}
 */
var firstMissingPositive = function (nums) {
  const n = nums.length;
  for (let i = 0; i < n; i++) {
    let target = nums[i];
    while (target > 0 && target <= n && nums[target - 1] !== target) {
      [nums[i], nums[target - 1]] = [nums[target - 1], nums[i]];
      target = nums[i];
    }
  }
  for (let i = 0; i < n; i++) {
    if (nums[i] !== i + 1) {
      return i + 1;
    }
  }
  return n + 1;
};