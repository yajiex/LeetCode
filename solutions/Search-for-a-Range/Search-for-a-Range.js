/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var searchRange = function (nums, target) {
  const n = nums.length;
  let l = 0;
  let r = n - 1;
  const ans = [-1, -1];
  while (l <= r) {
    const m = Math.floor((l + r) / 2);
    if (nums[m] === target) {
      r = m - 1;
    } else if (nums[m] < target) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }
  ans[0] = nums[l] === target ? l : -1;

  l = 0;
  r = n - 1;
  while (l <= r) {
    const m = Math.floor((l + r) / 2);
    if (nums[m] === target) {
      l = m + 1;
    } else if (nums[m] < target) {
      l = m + 1;
    } else {
      r = m - 1;
    }
  }

  ans[1] = nums[r] === target ? r : -1;
  return ans;
};